#include <iostream>
using namespace std;

int main()
{

    string input;
    int n, sum1, sum2;
    sum1 = 0;
    sum2 = 0;
    cin >> n;
    cin >> input;
    for (int i = 0; i < n; i++)
    {
        if (input[i] == 'A')
            sum1++;
        else
            sum2++;
    }

    if (sum1 > sum2)
        cout << "Anton" << endl;
    else if (sum1 < sum2)
        cout << "Danik" << endl;
    else
        cout << "Friendship" << endl;
}