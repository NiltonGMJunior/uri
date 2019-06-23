#include <iostream>
#include <map>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
    map<string, map<string, map<string, string>>> table = 
    {
        {"vertebrado", {
            {"ave", {
                {"carnivoro", "aguia"},
                {"onivoro", "pomba"}
            }},
            {"mamifero", {
                {"onivoro", "homem"},
                {"herbivoro", "vaca"}
            }}
        }},
        {"invertebrado", {
            {"inseto", {
                {"hematofago", "pulga"},
                {"herbivoro", "lagarta"}
            }},
            {"anelideo", {
                {"hematofago", "sanguessuga"},
                {"onivoro", "minhoca"}
            }}
        }}
    };

    string key1, key2, key3;
    cin >> key1 >> key2 >> key3;

    cout << table[key1][key2][key3] << '\n';

    return 0;
}
