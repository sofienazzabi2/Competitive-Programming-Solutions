#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    string x;
    string y;
    int overflow;
    char multiplication[250][500];
    char result[500];
    char overflowAddition[3];

    cin >> x;
    cin >> y;

    for (int i = 0; i < 250; i++)
    {
        for (int j = 0; j < 500; j++)
        {
            multiplication[i][j] = '0';
        }
    }

    for (int i = 0; i < y.size(); i++)
    {
        overflow = 0;
        for (int j = 0; j < x.size(); j++)
        {
            multiplication[i][j] = static_cast<char>(((static_cast<int>(y[i]) * static_cast<int>(x[i])) + overflow) % 10);
            overflow = (((static_cast<int>(y[i]) * static_cast<int>(x[i])) + overflow) / 10);
        }
    }
    for (int i = 0; i < 3; i++)
    {
        overflowAddition[i] = '0';
    }

    for (int i = 0; i < 500; i++)
    {
        int sum = 0;
        for (int j = 0; j < y.size(); j++)
        {
            sum += static_cast<int>(multiplication[i][j]);
        }
        sum += static_cast<int>(overflowAddition[3]);
        result[i] = static_cast<char>(sum % 10);
        for (int i = 0; i < 3; i++)
        {
            overflowAddition[i] = static_cast<char>(sum / 10);
        }
    }

    for(int i=0;i<500;i++){
        cout<<result[i];
    }

}