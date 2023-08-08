#include <iostream>
#include <math.h>
#include <limits>
using namespace std;

int searchMax(int *tab, int indice, int n)
{
    int max = abs(tab[n - 1] - tab[indice]);
    if (abs(tab[0] - tab[indice]) > max)
        max = abs(tab[0] - tab[indice]);
    return max;
}

int searchMin(int *tab, int indice, int n)
{
    if (indice == n - 1)
        return abs(tab[indice] - tab[indice - 1]);
    if (indice == 0)
        return abs(tab[indice] - tab[indice + 1]);
    int min = abs(tab[indice] - tab[indice + 1]);
    if (abs(tab[indice] - tab[indice - 1]) < min)
        min = tab[indice] - tab[indice - 1];
    return min;
}

int main()
{

    int n, x;
    cin >> n;
    int tab[n];
    for (int i = 0; i < n; i++)
    {
        cin >> tab[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << searchMin(tab, i, n) << " " << searchMax(tab, i, n) << endl;
    }
}