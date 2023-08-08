#include <iostream>
using namespace std;

int main()
{
    int n;
    int i = 0;
    int result = 1;
    cin >> n;
    string input1, input2;
    cin >> input1;
    while (i < n - 1)
    {
        cin >> input2;
        if (input1[1] == input2[0])
            result++;
        input1 = input2;
        i++;
    }

    cout << result;
}