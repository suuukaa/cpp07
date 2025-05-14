#include "iter.hpp"

template <typename T>
void do_something(T &unknown){
    unknown += 1;
}

template <typename T>
void print(T &s){
    std::cout << s << " ";
}

int main() {
    int array[5] = {9, 8, 7, 6, 5};
    std::string words[3] = {"morocco", "usa", "21"};

    iter(words, 3, print<std::string>);
        std::cout << std::endl;
    iter(array, 5, do_something<int>);

    for (int i = 0; i < 5; i++)
        std::cout << array[i] << " ";
    std::cout << std::endl;

    return 0;
}
