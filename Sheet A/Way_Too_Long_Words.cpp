#include <iostream>
#include <string>
using namespace std;

int main()
{

    int n;
    cin >> n;
    string x;
    string output[n];
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        if (x.length() > 10)
            output[i] = x[0] + to_string(x.length() - 2) + x[x.length() - 1];
        else
            output[i] = x;
    }
    for (int i = 0; i < n; i++)
    {
        cout << output[i] << endl;
    }
}