#include <bits/stdc++.h>

int main()
{
    std::string name;
    double salary, sales;

    std::cin >> name >> salary >> sales;

    std::cout << "TOTAL = R$ " << std::fixed << std::setprecision(2) << salary + 0.15 * sales << "\n";

    return 0;
}