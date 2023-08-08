#include <iostream>
using namespace std;

int tallerIndex(long long *tab1, long long height, int position, int n)
{   
    if ((position == n-1) && (tab1[n-1]<=height)) return -1;
    else if (position == n-1) return n-1;
    if (position != 0)
    {
        if ((tab1[position] > height) && (tab1[position - 1] > height))
            return tallerIndex(tab1, height, position / 2, n);
            }
    if ((position == 0) && (tab1[position] > height))
        return position;
    if (tab1[position] <= height)
        return tallerIndex(tab1, height, position + (n - position) / 2, n);
    return position;
}

int main()
{

    int n,q;
    long long *tab1;
    long long *tab2;
    long long  h1, h2;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        cin >> h1;
        tab1[i] = h1;
    }
    cout<<"hello"<<endl;
    cin >> q;
    for (int i = 0; i < q; ++i)
    {
        cin >> h2;
        tab2[i] = h2;
    }
    for (int j =0;j<q ;++j){
         int index = tallerIndex(tab1,tab2[j], n /2,n) ;
        if ((index == -1) && (tab1[n-1] < tab2[j])) cout<<tab1[n-1]<<" X"<<endl;
        else if ((index == -1) && (n>1)) cout<<tab1[n-2]<<" X"<<endl;
        else if ((index == -1) && tab1[0] < tab2[j]) cout<<tab1[0]<<" X"<<endl;
        else if (index==-1) cout<<"X X"<<endl;
        else if (index == 0) cout<<"X "<<tab1[0]<<endl;
        else if ((index > 1) && (tab1[index-1] == tab2[j])) cout<<"X "<<tab1[index]<<endl;
        else if (index>1) cout<<tab1[index-1]<<" "<<tab1[index]<<endl;
        else if ((index ==1) && (tab1[0] == tab2[j])) cout<<"X "<<tab1[index]<<endl;
        else cout<<tab1[index-1]<<" "<<tab1[index]<<endl; 
        cout<<"hello"<<endl;

    } 

} 

