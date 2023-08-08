#include <iostream>
using namespace std;

int main(){

int n;
int h;
int output,x;
output = 0;
cin >>n >>h;
for(int i=0;i<n;i++){
    cin>>x;
    if ( x % h==0 ) output+= x/h;
    else output+=x/h +1;

}

cout<<output<<endl;


}