#include <bits/stdc++.h>

int main()
{
    double x1, y1, x2, y2;

    std::cin >> x1 >> y1 >> x2 >> y2;

    std::cout << std::fixed << std::setprecision(4) << pow(pow(x2 - x1, 2) + pow(y2 - y1, 2) , 0.5) << "\n";

    return 0;
}