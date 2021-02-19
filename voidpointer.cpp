#include<bits/stdc++.h>
using namespace std;

int main(){
    int n = 890;
    int *l = NULL;
    void *ptr =&n;
    float b =99.3;
    ptr = &b;
    // int *y = ptr;
    cout<<n<<"  "<<ptr<<"  "<<*(int *)ptr<<"  "<<*(float *)ptr<<"  "<<*(int *)ptr<<"  "<<*l;
return 0;
}