#include <bits/stdc++.h>

int main()
{
    double n;
    std::cin >> n;

    if (n < 0 || n > 100)
        std::cout << "Fora de intervalo\n";
    else if (n <= 25)
        std::cout << "Intervalo [0,25]\n";
    else if (n <= 50)
        std::cout << "Intervalo (25,50]\n";
    else if (n <= 75)
        std::cout << "Intervalo (50,75]\n";
    else
        std::cout << "Intervalo (75,100]\n";

    return 0;
}