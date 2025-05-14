#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T,typename F>
void iter(T* string, int l, F f){
    for (int i = 0; i < l; i++){
        f(string[i]);
    }
}

#endif

