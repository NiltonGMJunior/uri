#include <bits/stdc++.h>

int main()
{
    unsigned int value;
    std::cin >> value;

    std::cout << value << "\n";
    
    unsigned short int notes[] { 100, 50, 20, 10, 5, 2, 1 }; 
    
    for (unsigned short int iii = 0; iii < 7; ++iii)
    {
        unsigned short int quant = value / notes[iii];
        std::cout << quant << " nota(s) de R$ " << notes[iii] << ",00\n";
        value %= notes[iii]; 
    }

    return 0;
}