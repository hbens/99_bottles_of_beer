/*
 * SPDX-License-Identifier: CC0-1.0
 * By HBENS
 */

#include <bits/stdc++.h>

std::function<void()>operator""_bottles_of_beer(unsigned long long int _){
    return[_]()mutable{for(;_>0;std::cout
        <<_++<<" bottles of beer on the wall,"<<std::endl
        <<--_<<" bottles of beer."<<std::endl
        <<"Take one down, pass it around,"<<std::endl
        <<--_<<" bottles of beer on the wall."<<std::endl<<std::endl);};
}

int main(void) {
    99_bottles_of_beer();
}
