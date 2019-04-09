#include <bits/stdc++.h>

int main()
{
    double a, b, c;
    std::cin >> a >> b >> c;

    if (a >= b + c || b >= a + c || c >= a + b)
    {
        std::cout << "Area = " << std::fixed << std::setprecision(1) << (a + b) * c / 2.0 << "\n";
    }
    else
    {
        std::cout << "Perimetro = " << std::fixed << std::setprecision(1) << a + b + c << "\n";
    }
    
    return 0;
}