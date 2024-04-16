/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnolte <pnolte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 10:21:22 by pnolte            #+#    #+#             */
/*   Updated: 2023/08/25 13:22:04 by pnolte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

#include <string>
#include <fstream>
#include <iostream>
#include <exception>
#include <cstdlib>

myBitCoin::myBitCoin() {}

myBitCoin::myBitCoin(const myBitCoin &src) {
  *this = src;
}

myBitCoin& myBitCoin::operator=(const myBitCoin &src) {
  if (this != &src) {
    this->_Data = src._Data;
  }
  return *this;
}

myBitCoin::~myBitCoin() {}

bool isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

bool validateDateDate(std::string Date) {
  int year, month, day;
  static const int daysInMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

  if (sscanf(Date.c_str(), "%d-%d-%d", &year, &month, &day) == 3) {
    if (year < 0 || month < 1 || month > 12 || day < 1) {
      throw std::runtime_error("Error: Invalid date format => " + Date);
      return false;
    }
    if (month == 2 && isLeapYear((year)))
      return day <= 29;
    else
      return day <= daysInMonth[month];
  }
  else {
    throw std::runtime_error("Error: Invalid date format => " + Date);
    return false;
  }
}

bool noNegativ(std::string Line, float nbr) {
  if (nbr < 0) {
    throw std::runtime_error("Error: not a positive number => " + Line);
    return false;
  }
  else
    return true;
}

bool noOverThousand(std::string Line, float nbr) {
  if (nbr > 1000) {
    throw std::runtime_error("Error: too large a number => " + Line);
    return false;
  }
  else
    return true;
}

void  myBitCoin::readerOfCoinPrice(std::ifstream &dataFile) {
  std::string Line;
  std::string Date;
  float       nbr;
  size_t      pos;
  
  std::getline(dataFile, Line);
  while (std::getline(dataFile, Line)) {
    try {
      if ((pos = Line.find(',')) != std::string::npos) {
        Date = Line.substr(0, pos);
        nbr = std::atof((Line.substr(pos + 1)).c_str());
        if (validateDateDate(Date) && noNegativ(Line, nbr))
          this->_Data[Date] = nbr;
        // std::cout << Date << nbr << std::endl;    
      }
      else 
        throw std::runtime_error("Error: bad input => " + Line);  
    }
    catch (std::exception &e) {
      std::cerr << e.what() << std::endl;
    }
  }
}

void  myBitCoin::loopMineCoin(std::ifstream &inputFile) {
  std::string Line;
  std::string Date;
  float       nbr;
  size_t      pos;

  std::getline(inputFile, Line);
  while (std::getline(inputFile, Line)) {
    try {
      if ((pos = Line.find('|')) != std::string::npos) {
        Date = Line.substr(0, pos);
        nbr = std::atof((Line.substr(pos + 1)).c_str());;
        if (validateDateDate(Date) && noNegativ(Line, nbr) 
            && noOverThousand(Line, nbr)) {
          std::map<std::string, float>::iterator DataIt = this->_Data.upper_bound(Date);
          if (DataIt == this->_Data.begin())
            std::cout << Date << " => " << nbr << " = " << "No Value" << std::endl;
          else {
            DataIt--;
            std::cout << Date << " => " << nbr << " = " << DataIt->second * nbr << std::endl;
          }
        }
      } 
      else 
        throw std::runtime_error("Error: bad input => " + Line);  
    }
    catch (std::exception &e) {
      std::cerr << e.what() << std::endl;
    }
  }
}

int myBitCoin::bitcoinEvaluation(std::string const file) {
  std::ifstream inputFile;
  std::ifstream dataFile;

  inputFile.open(file.c_str());
  dataFile.open("data.csv");
  if (!inputFile.is_open() || !dataFile.is_open()) {
    if (!inputFile.is_open())
      std::cerr << "Error: Unable to open: " << file << std::endl;
    if (!dataFile.is_open())
      std::cerr << "Error: Unable to open: data.csv" << std::endl;
    return EXIT_FAILURE;
  }

  readerOfCoinPrice(dataFile);
  loopMineCoin(inputFile);

  inputFile.close();
  dataFile.close();
  return 0;
}


/* ************************************************************************** */

