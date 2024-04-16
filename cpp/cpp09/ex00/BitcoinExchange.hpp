/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnolte <pnolte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 15:22:33 by pnolte            #+#    #+#             */
/*   Updated: 2023/08/22 15:47:30 by pnolte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __BITCOINEXCHANGE_H__
#define __BITCOINEXCHANGE_H__

#include <string>
#include <map>


class myBitCoin {
  public:
   myBitCoin();
   myBitCoin(const myBitCoin &src);
   myBitCoin &operator=(const myBitCoin &src);
   ~myBitCoin();
   
   int    bitcoinEvaluation(std::string const file);
   void   readerOfCoinPrice(std::ifstream &File);
   void   loopMineCoin(std::ifstream &inputFile);
   
  private:
   std::map<std::string, float> _Data;
};


#endif // __BITCOINEXCHANGE_H__
/* ************************************************************************** */
