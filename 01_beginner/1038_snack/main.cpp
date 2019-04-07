#include <bits/stdc++.h>

int main()
{
    unsigned short int code, quant;
    std::cin >> code >> quant;

    double prices[] { 4.00, 4.50, 5.00, 2.00, 1.50 };
    
    std::cout << "Total: R$ " << std::fixed << std::setprecision(2) << prices[code - 1] * quant << "\n";

    return 0;
}