/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnolte <pnolte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 15:17:31 by pnolte            #+#    #+#             */
/*   Updated: 2023/08/21 16:21:32 by pnolte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

#include <iostream>

int main(int argc, char *argv[]) {
  myBitCoin Wallet;
  
  if (argc != 2) {
    std::cout << "Usage: ./btc [input_file]" << std::endl;
    return 1;
  }
  return Wallet.bitcoinEvaluation(argv[1]);
}

/* ************************************************************************** */
