#include "Array.hpp"

template<typename T>
Array<T>::Array() : len(0), arr(NULL){}

template<typename T>
Array<T>::Array(unsigned int n) : len(n), arr(new T[n]() ) {}

template<typename T>
Array<T>::Array(const Array& copy): len(copy.len), arr(new T[copy.len]) {
    for (unsigned int i = 0; i < len; i++){
        arr[i] = copy.arr[i];
    }
}

template<typename T>
Array<T>& Array<T>::operator=(const Array& copy){
    if (this != &copy){
        delete [] arr;
        len = copy.len;
        arr = new T[len];
        for (unsigned int i = 0; i < len; i++){
            arr[i] = copy.arr[i];
        }
    }
    return *this;
}

template<typename T>
Array<T>::~Array(){
    delete [] arr;
}

template<typename T>
T& Array<T>::operator[](unsigned int idx){
    if(idx >= len)
        throw std::out_of_range("Idx is out of Bounds");
    return arr[idx];
}

template<typename T>
const T& Array<T>::operator[](unsigned int idx) const {
    if(idx >= len)
        throw std::out_of_range("Idx is out of Bounds");
    return arr[idx];
}

template<typename T>
unsigned int Array<T>::size()const {
    return len;
}
