#include <iostream>
#include <map>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
    map<string, string> table = 
    {
        {"61", "Brasilia"},
        {"71", "Salvador"},
        {"11", "Sao Paulo"},
        {"21", "Rio de Janeiro"},
        {"32", "Juiz de Fora"},
        {"19", "Campinas"},
        {"27", "Vitoria"},
        {"31", "Belo Horizonte"}
    };

    string key, output;
    cin >> key;

    if (table.find(key) == table.end())
        output = "DDD nao cadastrado";
    else
        output = table[key];

    cout << output << '\n';

    return 0;
}