#include <bits/stdc++.h>

int main()
{
    int num, hours;
    double wage;

    std::cin >> num >> hours >> wage;

    std::cout << "NUMBER = " << num << "\n";
    std::cout << "SALARY = U$ " << std::fixed << std::setprecision(2) << hours * wage << "\n";

    return 0;
}