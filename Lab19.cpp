#include <iostream>
using namespace std;

template <typename T>
void degree(const T& value, T& square, T& cube, T& fourth) {
    square = value * value;
    cube = square * value;
    fourth = square * square;
}

int main() {
    int x = 2;
    int a, b, c;

    degree(x, a, b, c);

    std::cout << "Square: " << a << "\n";
    std::cout << "Cube: " << b << "\n";
    std::cout << "Fourth degree: " << c << "\n";
}