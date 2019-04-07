#include <bits/stdc++.h>

int main()
{
    double value;
    std::cin >> value;

    unsigned int value_in_cents = static_cast<int>(value * 100);

    unsigned short int notes[] { 10000, 5000, 2000, 1000, 500, 200 };
    unsigned short int coins[] { 100, 50, 25, 10, 5, 1 };
    
    std::cout << "NOTAS:\n";
    for (unsigned short int iii = 0; iii < 6; ++iii)
    {
        unsigned int quant = value_in_cents / notes[iii];
        std::cout << quant << " nota(s) de R$ " << std::fixed << std::setprecision(2) << notes[iii] / 100.00 << "\n";
        value_in_cents -= quant * notes[iii];
    }

    std::cout << "MOEDAS:\n";
    for (unsigned short int iii = 0; iii < 6; ++iii)
    {
        unsigned int quant = value_in_cents / coins[iii];
        std::cout << quant << " moeda(s) de R$ " << std::fixed << std::setprecision(2) << coins[iii] / 100.00 << "\n";
        value_in_cents -= quant * coins[iii];  
    }

    return 0;
}