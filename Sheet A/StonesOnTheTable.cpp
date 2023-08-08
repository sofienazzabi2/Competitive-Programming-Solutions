#include <iostream>
#include <string>
using namespace std;

int main()
{

    int n;
    string ch;
    cin >> n;
    cin >> ch;
    int result = 0;
    int i = 0;
    while (i < ch.size() - 1)
    {
        if (ch[i] == ch[i + 1])
        {
            ch.erase(i + 1, 1);
            result++;
        }
        if (ch[i] != ch[i + 1])
        {
            i++;
        }
    }
    cout << result;
}