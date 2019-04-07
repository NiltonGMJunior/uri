#include <bits/stdc++.h>

int main()
{
    unsigned int n;
    std::cin >> n;

    unsigned int hours = n / 3600;
    n %= 3600;
    unsigned short int minutes = n / 60;
    n %= 60;

    std::cout << hours << ":" << minutes << ":" << n << "\n";

    return 0;
}