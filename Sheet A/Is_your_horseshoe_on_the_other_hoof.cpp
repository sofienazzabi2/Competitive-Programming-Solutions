#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{
    unordered_set<int> mySet;
    int x;

    for (int i = 0; i < 4; i++)
    {
        cin >> x;
        mySet.insert(x);
    }
    cout << 4 - mySet.size();
}