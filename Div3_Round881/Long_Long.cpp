#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int t, n;
    long long x, sum, positive;
    bool cond;
    cin >> t;
    int length;
    for (int i = 0; i < t; ++i)
    {
        cin >> n;
        sum = 0;
        positive = 0;
        cond = true;
        for (int j = 0; j < n; ++j)
        {
            cin >> x;
            if ((x < 0) && cond)
            {
                positive++;
                cond = false;
            }
            if (x > 0)
                cond = true;

            sum += abs(x);
        }
        cout << sum << " " << positive << endl;
    }
}