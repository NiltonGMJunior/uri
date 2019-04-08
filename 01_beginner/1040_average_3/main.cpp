#include <bits/stdc++.h>

int main()
{
    double n1, n2, n3, n4;
    std::cin >> n1 >> n2 >> n3 >> n4;

    double avg = (2.0 * n1 + 3.0 * n2 + 4.0 * n3 + n4) / 10.0;

    std::cout << "Media: " << std::fixed << std::setprecision(1) << avg << "\n";

    if (avg >= 7.0) std::cout << "Aluno aprovado.\n";
    else if (avg >= 5.0)
    {
        std::cout << "Aluno em exame.\n";
        double ne;
        std::cin >> ne;
        std::cout << "Nota do exame: " << std::fixed << std::setprecision(1) << ne << "\n";
        avg = (avg + ne) / 2.0;
        if (avg >= 5.0) std::cout << "Aluno aprovado.\n";
        else std::cout << "Aluno reprovado.\n";
        std::cout << "Media final: " << avg << "\n";
    }
    else std::cout << "Aluno reprovado.\n";

    return 0;
}