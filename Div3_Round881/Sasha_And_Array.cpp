#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

int main()
{

    int t, x, w,sum;
    cin >> t;
    vector<int> myOutput;
    for (int j = 0; j < t; ++j)
    {
        cin >> x;
        sum = 0;
        vector<int> myVector;
        for (int i = 0; i < x; ++i)
        {
            cin >> w;
            myVector.push_back(w);
        }
         sort(myVector.begin(), myVector.end());
          
         for (int k = 0;k<x / 2;++k){
            sum+=myVector[x-k-1] -myVector[k];
            
         }
         myOutput.push_back(sum);

    }
    for (int i = 0;i<t;++i){
        cout<<myOutput[i]<<endl;
    }
}