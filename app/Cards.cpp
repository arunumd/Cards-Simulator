/**
*@file         Cards.cpp
*@date         February 8, 2019
*@copyright    2019, Arun Kumar Devarajulu
*@license      MIT License
*              Permission is hereby granted, free of charge, to any person obtaining a copy
*              of this software and associated documentation files (the "Software"), to deal
*              in the Software without restriction, including without limitation the rights
*              to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
*              copies of the Software, and to permit persons to whom the Software is
*              furnished to do so, subject to the following conditions:
*
*              The above copyright notice and this permission notice shall be included in all
*              copies or substantial portions of the Software.
*
*              THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
*              IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
*              FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
*              AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
*              LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
*              OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
*              SOFTWARE.
*@brief        This file contains the class definitions for cards simulator
*/

#include <iostream>
#include <vector>
#include <random>
#include <iterator>
#include <algorithm>
#include "Cards.hpp"

void Cards::Shuffle() {
  std::random_shuffle(_deck.begin(), _deck.end());
}

void Cards::ViewDeck() const {
  std::copy(_deck.begin(), _deck.end(),
            std::ostream_iterator<int>(std::cout, " "));
}

void Cards::ViewCard(int &index) const {
  if (index < 1 || index > 51) {
    std::cout << "\nThat is not a valid index. " <<
              "Please choose an index with the range of cards (0 to 51) below :"
              << std::endl;
    int id = 0;
    std::cin >> id;
    ViewCard(id);
  } else {
    std::cout << "The card at index " << index << " is : " <<
              _deck.at(index) << std::endl;
  }
}
