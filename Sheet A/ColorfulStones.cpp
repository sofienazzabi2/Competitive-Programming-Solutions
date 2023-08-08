#include <iostream>
using namespace std;

int main(){


    string s ,t;
    int position = 1;
    cin>>s; 
    cin>>t;
    for (int i =0;i<t.size();i++){
        if (t[i] == s[position-1]) position++;


}
cout<<position;

}