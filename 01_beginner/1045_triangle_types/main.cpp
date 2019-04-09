#include <bits/stdc++.h>

int main()
{
    double a, b, c;
    std::cin >> a >> b >> c;

    double biggest_side, side_1, side_2;

    if (a >= b)
    {
        if (b >= c) // a > b > c
        {
            biggest_side = a;
            side_1 = b;
            side_2 = c;
        }
        else if (a >= c) // a > c > b
        {
            biggest_side = a;
            side_1 = b;
            side_2 = c;
        }
        else // c > a > b
        {
            biggest_side = c;
            side_1 = a;
            side_2 = b;
        }  
    }
    else
    {
        if (a >= c) // b > a > c 
        {
            biggest_side = b;
            side_1 = a;
            side_2 = c;
        }
        else if (b >= c) // b > c > a
        {
            biggest_side = b;
            side_1 = c;
            side_2 = a;
        }
        else // c > b > a
        {
            biggest_side = c;
            side_1 = b;
            side_2 = a;
        }  
    }

    if (biggest_side >= side_1 + side_2) std::cout << "NAO FORMA TRIANGULO\n";
    else if (biggest_side * biggest_side == side_1 * side_1 + side_2 * side_2) std::cout << "TRIANGULO RETANGULO\n";
    else
    {
        if (biggest_side * biggest_side > side_1 * side_1 + side_2 * side_2) std::cout << "TRIANGULO OBTUSANGULO\n";
        else if (biggest_side * biggest_side < side_1 * side_1 + side_2 * side_2) std::cout << "TRIANGULO ACUTANGULO\n";

        if (biggest_side == side_1 && side_1 == side_2) std::cout << "TRIANGULO EQUILATERO\n";
        else if (biggest_side == side_1 || biggest_side == side_2 || side_1 == side_2) std::cout << "TRIANGULO ISOSCELES\n";
    }
    
    return 0;
}