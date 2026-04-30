#include <iostream>
#include "../include/MATH.h"

int main() {
    double x;

    std::cout << "Ingrese valor en radianes: ";
    std::cin >> x;

    std::cout << "Seno: " << seno(x) << std::endl;
    std::cout << "Coseno: " << coseno(x) << std::endl;
    std::cout << "Tangente: " << tangente(x) << std::endl;

    return 0;
}