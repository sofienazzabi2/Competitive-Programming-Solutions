#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    int n, m;
    int count = 0;
    cin >> n >> m;
    while (n * 3 <= m * 2)
    {
        n = n * 3;
        m = m * 2;
        count++;
    }
    cout << ++count << endl;
}