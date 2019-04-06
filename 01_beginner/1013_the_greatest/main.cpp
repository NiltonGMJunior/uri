#include <bits/stdc++.h>

int main()
{
    int a, b, c;
    std::cin >> a >> b >> c;

    int maior_ab = (a + b + std::abs(a - b)) / 2;
    int maior_abc = (maior_ab + c + std::abs(maior_ab - c)) / 2;

    std::cout << maior_abc << " eh o maior" << "\n";

    return 0;
}