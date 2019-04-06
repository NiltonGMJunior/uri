#include <bits/stdc++.h>

#define PI 3.14159

int main()
{
    double a, b, c;
    std::cin >> a >> b >> c;

    std::cout << std::fixed << std::setprecision(3) <<  "TRIANGULO: " << a * c / 2.0 << "\n";
    std::cout << std::fixed << std::setprecision(3) <<  "CIRCULO: " << PI * c * c << "\n";
    std::cout << std::fixed << std::setprecision(3) <<  "TRAPEZIO: " << c * (a + b) / 2.0 << "\n";
    std::cout << std::fixed << std::setprecision(3) <<  "QUADRADO: " << b * b << "\n";
    std::cout << std::fixed << std::setprecision(3) <<  "RETANGULO: " << a * b << "\n";

    return 0;
}