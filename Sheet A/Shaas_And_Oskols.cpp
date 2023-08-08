#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> myVector;
    int n, x;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        myVector.push_back(x);
    }
    int shots, a, b;
    cin >> shots;
    for (int i = 0; i < shots; i++)
    {
        cin >> a >> b;
        if ((a == 1) && (a == n))
        {
            myVector[a - 1] = 0;
        }
        else if (a == 1)
        {

            myVector[a] += myVector[a - 1] - b;
            myVector[a - 1] = 0;
        }
        else if (a == n)
        {
            myVector[a - 1] = 0;
            myVector[a - 2] += b - 1;
        }
        else
        {

            myVector[a - 2] += b - 1;
            myVector[a] += myVector[a - 1] - b;
            myVector[a - 1] = 0;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << myVector[i] << endl;
    }
}