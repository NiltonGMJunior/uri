#include <bits/stdc++.h>

int main()
{
    int prod_1, prod_2, quant_1, quant_2;
    double price_1, price_2;

    std::cin >> prod_1 >> quant_1 >> price_1;
    std::cin >> prod_2 >> quant_2 >> price_2;

    std::cout << "VALOR A PAGAR: R$ " << std::fixed << std::setprecision(2) << (quant_1 * price_1) + (quant_2 * price_2) << "\n";

    return 0;
}