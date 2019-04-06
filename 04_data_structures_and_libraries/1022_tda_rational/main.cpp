#include <bits/stdc++.h>

// Defines a rational number with a numerator and denominator
// (-999999 <= num, den <= 1000000)
typedef struct RationalNumber
{
    int num;
    int den;
} rational;

// Adds two rational numbers and returns a rational unsimplified
rational add_rational(rational& rational_1, rational& rational_2)
{
    rational rational;
    rational.num = rational_1.num * rational_2.den + rational_1.den * rational_2.num;
    rational.den = rational_1.den * rational_2.den;
    return rational; 
}

// Subtracts two rational numbers and returns a rational unsimplified
rational subtract_rational(rational& rational_1, rational& rational_2)
{
    rational rational;
    rational.num = rational_1.num * rational_2.den - rational_1.den * rational_2.num;
    rational.den = rational_1.den * rational_2.den;
    return rational; 
}

// Multiplies two rational numbers and returns a rational unsimplified
rational multiply_rational(rational& rational_1, rational& rational_2)
{
    rational rational;
    rational.num = rational_1.num * rational_2.num;
    rational.den = rational_1.den * rational_2.den;
    return rational;    
}

// Divides two rational numbers and returns a rational unsimplified
rational divide_rational(rational& rational_1, rational& rational_2)
{
    rational rational;
    rational.num = rational_1.num * rational_2.den;
    rational.den = rational_1.den * rational_2.num;
    return rational;      
}

// Simplify a rational number and return the simplified version
rational simplify_rational(rational &rational_full)
{
    // Finds the greatest common divider for numerator and denominator using the Euclidean algorithm
    
    // Finds biggest number of two
    int big = (rational_full.num >= rational_full.den) ? rational_full.num : rational_full.den;
    // Defines the smallest
    int small = (rational_full.num < rational_full.den) ? rational_full.num : rational_full.den;

    // Defines the remainder of the division
    int rem = big % small;

    // Loops until remainder is zero, then small is the greatest common divider
    while (rem > 0)
    {
        big = small;
        small = rem;
        rem = big % small;
    }

    rational rational_simple;
    rational_simple.num = rational_full.num / small;
    rational_simple.den = rational_full.den / small;
    if (rational_simple.den < 0)
    {
        rational_simple.num *= -1;
        rational_simple.den *= -1;
    }
    return rational_simple;
}

int main()
{
    // Declares and reads the number of test cases
    unsigned short int n;
    std::cin >> n;

    // Declares the two input rational numbers
    rational rational_1, rational_2;

    // Declares the operation char
    char op;

    // Runs through the test cases
    for (unsigned short int _ = 0; _ < n; ++_)
    {
        // Reads the input
        scanf("%d / %d %c %d / %d", &(rational_1.num), &(rational_1.den), &op, &(rational_2.num), &(rational_2.den));

        // Full rational output (NOT SIMPLIFIED)
        rational rational_full;

        switch (op)
        {
            case '+': rational_full = add_rational(rational_1, rational_2); break;
            case '-': rational_full = subtract_rational(rational_1, rational_2); break;
            case '*': rational_full = multiply_rational(rational_1, rational_2); break;
            case '/': rational_full = divide_rational(rational_1, rational_2); break;
            default: std::cout << "ERROR! INVALID OPERATOR!\n";
        }

        // Simplified output
        rational rational_simple = simplify_rational(rational_full);
        
        printf("%d/%d = %d/%d\n", rational_full.num, rational_full.den, rational_simple.num, rational_simple.den);
    }

    return 0;
}