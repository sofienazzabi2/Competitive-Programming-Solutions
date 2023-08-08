#include <stdio.h>
#include <iostream>
using namespace std;

int pgcd(long long a, long long b)
{
    while (b != 0)
    {
        long long temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main()
{
    long long r, l;
    cin >> l >> r;

    long long start = l;
    long long end = r;
    long long middleNumber;
    long long iterateEnd;
    bool cond = true;

    while ((start + 1 < end) && (cond))
    {
        iterateEnd = end;
        while ((start + 1 < iterateEnd) && (cond))
        {

            middleNumber = start + 1;
            while ((cond) && middleNumber < iterateEnd)
            {
                if (pgcd(middleNumber, start) == 1 && pgcd(iterateEnd, middleNumber) == 1 && pgcd(iterateEnd, start) != 1)
                {
                    cout << start << " " << middleNumber << " " << iterateEnd << endl;
                    cond = false;
                }
                else
                    middleNumber++;
            }
            iterateEnd--;
        }
        start++;
    }

    if (cond)
        cout << -1 << endl;

    else
        cout << --start << " " << middleNumber << " " << ++iterateEnd;

    return 0;
}