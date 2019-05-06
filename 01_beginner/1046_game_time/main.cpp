#include <iostream>

int main()
{
    int start, end;
    std::cin >> start >> end;

    std::cout << "O JOGO DUROU ";
    if (start == end) std::cout << 24;
    else if (end > start) std::cout << end - start;
    else std::cout << 24 - start + end; 
    std::cout << " HORA(S)\n"; 
    
    return 0;
}