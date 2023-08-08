#include <iostream>
#include <cctype>
#include <string>
using namespace std;

int main()
{

    string input, result = "";
    cin >> input;
    int upper, lower;
    upper = lower = 0;
    for (int i = 0; i < input.size(); i++)
    {
        if (isupper(input[i]))
            upper++;
        else
            lower++;
    }
    if (lower >= upper)
    {
        for (int i = 0; i < input.size(); i++)
        {
            result += tolower(input[i]);
        }
    }
    else
    {
        for (int i = 0; i < input.size(); i++)
        {
            result += toupper(input[i]);
        }
    }
    cout << result << endl;
}