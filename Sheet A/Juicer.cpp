#include <iostream>
using namespace std;

int main()
{
    int n, b, d, x;
    cin >> n >> b >> d;
    int sum = 0;
    int result = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        if (x <= b)
            sum += x;
        if (sum > d)
        {
            result++;
            sum = 0;
        }
    }

    cout << result << endl;
}