#include <iostream>

int main() {
    int x = 1;
    int& rx = x; 
    int* px = reinterpret_cast<int*>(rx);
    // rx 是 lvalue, 所以仅仅只是把 rx 解引用后的值，coerce 成 int*
    // https://en.cppreference.com/w/cpp/language/reinterpret_cast.html

    std::cout << "x: " <<  x << '\n';
    std::cout << "rx: " <<  rx << '\n';
    std::cout << "px: " <<  *px << '\n';
}