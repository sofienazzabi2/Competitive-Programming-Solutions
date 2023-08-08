#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{
    unordered_set<char> mySet = {};
    string ch;
    getline(cin, ch);
    for (int i = 0; i < ch.length(); i++)
    {
        if (isalpha(ch[i]))
        {
            mySet.insert(ch[i]);
        }
    }
    cout << mySet.size();
}