#include<iostream>
using namespace std;

/* bool search(long long k,long long sum){
    long long start = 2;
    long long end = k;
    long long mid = start +(end-start) /2;


} */

int main(){

long long n,k,sum;
cin>>n>>k;
int result = 1;
sum = k;
k--;

if (n == 1) std::cout<<0<<endl;
else {
    while (( sum < n)&&(k>0)){
        sum+=k-1;
        k--;
        result++;
    }
    if (sum >= n) std::cout<<result<<endl;
    else std::cout<<-1<<endl;
    
}




}