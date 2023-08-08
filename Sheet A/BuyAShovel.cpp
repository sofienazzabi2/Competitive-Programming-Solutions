#include <iostream>
using namespace std;

int main()
{
    int n, x;
    cin >> n >> x;
    int c = n;
    int result = 1;
    while ((c % 10 != 0) && (c % 10 != x))
    {
        result++;
        c = result*n;
    }
    cout << result;
}