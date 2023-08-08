#include <iostream>
using namespace std;

int main()
{

      long long int n, k;
    cin >> n >> k;
      long long int odd;
    n % 2 == 1 ? odd = (n / 2) + 1 : odd = n / 2;

    if (k <= odd)
    {
        cout << 2 * k - 1 << endl;
    }
    else
        cout << (k - odd) * 2 << endl;
}