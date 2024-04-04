# 99 bottles of beer

## The issue

People never name their '99 bottles of beer' function properly.

## How to compile/run

`make run`

## The code

```cpp
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
```

`#define` and template free since the beginning.
