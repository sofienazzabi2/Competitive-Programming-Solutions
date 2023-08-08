#include <iostream>
#include <string>
#include <cctype>
#include <unordered_set>
using namespace std;

int main()
{

    string ch;
    cin >> ch;
    unordered_set<char> w;
    for (char c : ch)
        w.insert(c);

    if ((w.size() % 2) == 0)
        cout << "CHAT WITH HER!";
    else
        cout << "IGNORE HIM!";
}