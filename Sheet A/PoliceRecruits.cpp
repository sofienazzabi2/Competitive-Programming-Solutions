#include <iostream>
using namespace std;

int main()
{

    int n, x;
    int all = 0;
    int available = 0;
    int treated = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        if (x > 0)
            available += x;
        else
        {
            treated += x;
            if ((available > 0) && (treated < 0))
            {
                available--;
                treated++;
            }
        }
    }
    cout << -1 * treated;
}