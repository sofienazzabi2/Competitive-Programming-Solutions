#include <iostream>
using namespace std;

int main()
{
    int n;
    int x;
    int sum;
    int solved = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        sum = 0;
        for (int j = 0; j < 3; j++)
        {
            cin >> x;
            if (x > 0)
                sum++;
        }
        if (sum >= 2)
            solved++;
    }
    cout << solved << endl;
}