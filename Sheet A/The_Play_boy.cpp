#include <iostream>
#include <vector>
using namespace std;

int BSfindFirst(int start, int end,vector <int> v3)
{
    while (start < end)
    {
        int mid = start + (end - start) / 2;
        if (v3[mid] == 1)
            end = mid;
        else
            start = mid + 1;
    }
    if (v3[start] == 1)
        return start;
    return -1;
}



int main()
{

    int n, q, c;
    vector<long long> v1;
    vector<long long> v2;
    long long x;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        v1.push_back(x);
    }
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        cin >> x;
        v2.push_back(x);
    }
    for (int i = 0; i < q; i++)
    {
        vector<int> v3;
        for (int j = 0; j < n; j++)
        {
            if (v2[i] < v1[j])
                c = 1;
            else if (v2[i] > v1[j])
                c = 0;
            else
                c = -1;
            v3.push_back(c);
            
        }
        int indextall = BSfindFirst(0, n - 1, v3);
        int indexShort;
        if ((indextall == -1) && (n> 1) && (v1[n-1] == v2 [i])) indexShort = n-2;
        else if ((indextall == -1) && (v1[n-1] == v2[i])) indexShort = -1;
        else if (indextall == -1) indexShort = n-1;
        else if (indextall == 0) indexShort = -1;
        else if ((indextall == 1) && (v1[0] == v2[i])) indexShort =-1;
        else if (v1[indextall -1 ] == v2[i]) indexShort= indextall-2;
        else indexShort = indextall-1;
         indexShort == -1 ? cout << "X " : cout << v1[indexShort]<<" ";  
        indextall == -1 ? cout << "X"<<endl  : cout << v1[indextall]<<endl; 
        

        // cout<<endl;
    }
}