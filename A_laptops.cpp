#include <stdio.h>
#include <string.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <numeric>
using namespace std;
vector<int> sortAndGetIndices(const vector<int>& vec) {
    vector<int> indices(vec.size());
    iota(indices.begin(), indices.end(), 0);  // Initialize indices with 0, 1, 2, ...

    sort(indices.begin(), indices.end(),
              [&vec](int i, int j) { return vec[i] < vec[j]; });  // Sort indices based on vec

    return indices;
}

int main()
{

    int n, price, quality;
    cin >> n;
    vector<int> prices;
    vector<int> qualities;

    for (int i = 0; i < n; i++)
    {
        cin >> price >> quality;
        prices.push_back(price);
        qualities.push_back(quality);
    }
    /*
    int i = 0;
    bool cond = false;

    while ((i < n - 1) && (!cond))
    {
        int j = i + 1;
        while ((j < n) && (!cond))
        {
            if ((prices[i] < prices[j]) && (qualities[i] > qualities[j]))
            {
                 cond = true;
                
            }
            j++;
        }
        i++;
    }
    if (cond) cout<< "Happy Alex" << endl;
    else cout<< "Poor Alex" <<endl;
    */

   vector<int>pricesIdicesSorted = sortAndGetIndices(prices);
   vector<int>qualitiesIdicesSorted = sortAndGetIndices(qualities);

   if (pricesIdicesSorted == qualitiesIdicesSorted) cout<< "Poor Alex" << endl;
    else cout<< "Happy Alex" <<endl;





}


