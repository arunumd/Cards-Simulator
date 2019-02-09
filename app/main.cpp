/**
*@file         main.cpp
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
*@brief        This file contains the implementation of the deck of cards
*/

#include <iostream>
#include <limits>
#include <cstdint>
#include "Cards.hpp"

int main() {
    std::cout << "Welcome to the deck of cards game !\n\n";

    Cards Pack;

    while (1) {
        std::cout << "\na.) To shuffle the cards, press 'S';\n" <<
                  "b.) To view the deck on screen, press 'D';\n" <<
                  "c.) To view a specific card from index, press 'I;\n" <<
                  "d.) To quit program, press 'Q'\n" << std::endl;

        char input = 'P';

        std::cin >> input;

        if (input == 'q' || input == 'Q') break;
        else {
            switch (input) {
            case 'S': case 's': {
                Pack.Shuffle();
                break;
            }

            case 'D': case 'd': {
                Pack.ViewDeck();
                break;
            }

            case 'I': case 'i': {
                std::cout << "Please enter index number of card" << std::endl;
                int index = 0;
                std::cin >> index;
                if (!std::cin.fail()) {
                    Pack.ViewCard(index);
                    break;
                } else {
                    std::cin.clear();
                    std::cin.ignore();
                    std::cout << "Input was not an integer" << std::endl;
                    break;
                }
            }

            default: {
                std::cout << "The character " << input <<
                          " is not an acceptable character.\n" << std::endl;
                break;
            }
            }
        }
    }
    return 0;
}
