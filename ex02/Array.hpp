#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <cstdlib>

template <typename T>
class Array{

    unsigned int    len;
    T*              arr;

    public :
        Array();
        Array(unsigned int n);
        Array(const Array &copy);
        Array& operator=(const Array &copy);
        ~Array();

        T& operator[](unsigned int idx);
        const T& operator[](unsigned int idx) const;
        unsigned int size() const;
};

#include "Array.tpp"

#endif
