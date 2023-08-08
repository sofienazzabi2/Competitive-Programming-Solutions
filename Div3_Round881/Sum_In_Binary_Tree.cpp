#include <iostream>
#include <bitset>
#include <cmath>
#include <bitset>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    long long x, result, index;
    cin >> t;
    for (int i = 0; i < t; ++i)
    {
        cin >> x;
        bitset<64> binary(x);
        string binaryString = binary.to_string();
        binaryString.erase(0, binaryString.find_first_not_of('0'));
        string ch = binaryString.substr(1, binaryString.size());
        result = 1;
        index = 1;

        for (int j = 0; j < ch.size(); ++j)
        {

            index = index * 2 + ch[j] - '0';
            result += index;
        }
        cout << result << endl;
    }
}
