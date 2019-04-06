#include <bits/stdc++.h>

int main()
{
    int dist;
    double fuel;

    std::cin >> dist >> fuel;

    std::cout << std::fixed << std::setprecision(3) << dist / fuel << " km/l" << "\n";

    return 0;
}