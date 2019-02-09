/**
*@file         Cards.hpp
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
*@brief        This file contains the class declarations for cards simulator
*/

#pragma once
#ifndef _CARDS_H
#define _CARDS_H

#include <iostream>
#include <vector>

class Cards {
 public:
    Cards() {  // Constructor
        for (int i = 1; i < 53; i++) {
            _deck.push_back(i);
        }
        std::cout << "Successfuly initialized unshuffled deck of cards !\n"
                  << std::endl;
    }

    Cards(const Cards &c) {}  // Copy constructor

    ~Cards() {}  // Destructor

    /* Function to shuffle the deck of cards */
    void Shuffle();

    /* Function to vew the entire deck */
    void ViewDeck() const;

    /* Function to view a random card in the deck */
    void ViewCard(int &index) const;

 private:
    /* Container for cards between 1 to 52 */
    std::vector<int> _deck;
};

#endif  // _CARDS_H
