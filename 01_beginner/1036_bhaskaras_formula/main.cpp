#include <bits/stdc++.h>

int main()
{
    double a, b, c;
    std::cin >> a >> b >> c;

    if (b * b < 4 * a * c || a == 0)
        std::cout << "Impossivel calcular\n";
    else
    {
        double delta = b * b - 4 * a * c;
        double r1 = (- b + pow(delta, 0.5)) / (2 * a);
        double r2 = (- b - pow(delta, 0.5)) / (2 * a);
        std::cout << "R1 = " << std::fixed << std::setprecision(5) << r1 << "\n";
        std::cout << "R2 = " << std::fixed << std::setprecision(5) << r2 << "\n";
    }

    return 0;
}