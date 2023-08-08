#include <iostream>
using namespace std;

int main()
{ 
    int n1;
    long long n2;
    long long output = 0;
    char sign;
    long long number;
    cin >> n1 >> n2;
    for (int i = 0; i < n1; i++)
    {
        cin >> sign >> number;
        
        if (sign == '+')
            n2 += number;
        else if ((sign == '-') && (n2 - number >= 0))
            n2 -= number;
        else
            output++;
    }
    cout << n2 << " " << output;
}