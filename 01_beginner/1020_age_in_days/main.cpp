#include <bits/stdc++.h>

int main()
{
    unsigned int n;
    std::cin >> n;

    unsigned int years = n / 365;
    n %= 365;
    unsigned short int months = n / 30;
    n %= 30;

    std::cout << years << " ano(s)\n" << months << " mes(es)\n" << n << " dia(s)\n";

    return 0;
}