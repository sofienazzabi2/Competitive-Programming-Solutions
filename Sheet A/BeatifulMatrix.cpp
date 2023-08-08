    #include <iostream>
    #include <cmath>
    using namespace std;

    int main()
    {
        int input;
        int i, j, indexI, indexJ;
        for (i = 0; i < 5; i++)
        {
            for (j = 0; j < 5; j++)
            {
                cin >> input;
                if (input == 1)
                {
                    indexI = i;
                    indexJ = j;
                }
            }
        }
        cout << abs(2 - indexI) + abs(2 - indexJ) << endl;
    }