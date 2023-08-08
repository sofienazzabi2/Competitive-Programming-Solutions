#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{

    vector<int> numbers;
    int n, x, sum1, sum2;
    int i;
    sum1 = sum2 = 0;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        numbers.push_back(x);
    }
    sort(numbers.begin(), numbers.end(), greater<int>());

    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
            sum1 += numbers[i];
        else
            sum2 += numbers[i];
    }
    cout << sum1 << " " << sum2;
}