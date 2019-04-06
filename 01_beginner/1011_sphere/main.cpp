#include <bits/stdc++.h>

#define PI 3.14159

int main()
{
    double radius;
    std::cin >> radius;

    std::cout << "VOLUME = " << std::fixed << std::setprecision(3) << (4.0 / 3.0) * PI * radius * radius * radius << "\n";

    return 0;
}