#include <iostream>

int main() {
    int x = 1;
    int& rx = x; 
    int* px = reinterpret_cast<int*>(rx);

    std::cout << "x: " <<  x << '\n';
    std::cout << "rx: " <<  rx << '\n';
    std::cout << "px: " <<  *px << '\n';
}