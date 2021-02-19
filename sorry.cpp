#include<bits/stdc++.h>
using namespace std;

int main(){
    int x = 5542;
    int y = x;
    // referance variable it has same value everytime  
    int & l = x;
    cout<<x<<endl;
    cout<<y<<endl;
    cout<<l<<endl;
    x = 99;
    cout<<endl<<x<<endl<<l;

return 0;
}