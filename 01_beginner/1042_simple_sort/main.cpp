#include <bits/stdc++.h>

int main()
{
    int a, b, c;
    std::cin >> a >> b >> c;

    if (a >= b)
    {
        if (b >= c) // a > b > c
        {
            std::cout << c << "\n";
            std::cout << b << "\n";
            std::cout << a << "\n";
        }
        else if (a >= c) // a > c > b
        {
            std::cout << b << "\n";
            std::cout << c << "\n";
            std::cout << a << "\n";
        }
        else // c > a > b
        {
            std::cout << b << "\n";
            std::cout << a << "\n";
            std::cout << c << "\n";
        }  
    }
    else
    {
        if (a >= c) // b > a > c 
        {
            std::cout << c << "\n";
            std::cout << a << "\n";
            std::cout << b << "\n";
        }
        else if (b >= c) // b > c > a
        {
            std::cout << a << "\n";
            std::cout << c << "\n";
            std::cout << b << "\n";
        }
        else // c > b > a
        {
            std::cout << a << "\n";
            std::cout << b << "\n";
            std::cout << c << "\n";
        }  
    }

    std::cout << "\n";

    std::cout << a << "\n";
    std::cout << b << "\n";
    std::cout << c << "\n";

    return 0;
}