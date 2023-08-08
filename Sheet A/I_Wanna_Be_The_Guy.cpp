#include<iostream>
#include<unordered_set>
using namespace std;

int main(){
unordered_set<int> first;    
  
int n,x,y,w;
cin>>n;
cin>>x;
for (int i =0;i<x;++i){
    cin>>w;
    first.insert(w);
}
cin>>x;
for (int i =0;i<x;++i){
    cin>>w;
    first.insert(w);
}
(n-first.size() == 0) ? cout<<"I become the guy." <<endl : cout<<"Oh, my keyboard!" <<endl ;
}