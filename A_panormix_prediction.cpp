#include<stdio.h>
#include<iostream>
#include<cmath>
using namespace std;



bool isPrime(int number) {
    // Handle special cases
    if (number <= 1)
        return false;

    // Check for divisibility up to the square root of the number
    int sqrtNumber = static_cast<int>(std::sqrt(number));
    for (int i = 2; i <= sqrtNumber; ++i) {
        if (number % i == 0)
            return false;
    }

    // The number is prime
    return true;
}



int main(){
int n,m;
bool cond = true;
cin >> n >> m;


int i = n+1;

while ((i < m ) && (cond)){
if (isPrime(i)) cond = false;
i++;
}

if ((cond) && isPrime(m)) cout << "YES"<<endl;
else cout << "NO"<<endl; 




}