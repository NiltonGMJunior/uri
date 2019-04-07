#include <bits/stdc++.h>

int main()
{
    int time_spent, avg_speed;
    std::cin >> time_spent >> avg_speed;
    
    std::cout << std::fixed << std::setprecision(3) << time_spent * avg_speed / 12.0 << "\n"; 

    return 0;
}