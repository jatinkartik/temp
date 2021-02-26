#include<iostream>
#include<string.h>
using namespace std;
string replace(char * neword,char * oldword,char * source){
    string tempo;
    tempo = strstr(source,neword);
    return tempo;
}
int main(){
    FILE *ptr,*ptr2;
    ptr = fopen("bill.txt","r");
    ptr2 = fopen("newbill.txt","w");
    char* oldword,* neword, * temp;
    cout<<"Enter OLD word :";
    cin>>oldword;
    cout<<"Enter NEW word :";
    cin>>neword;
    cout<<endl<<endl<<oldword<<neword<<endl;
    fgets(temp,100,ptr);
    cout<<endl<<"the actual file is         "<<temp<<endl;
    replace(neword,oldword,temp);
    cout<<endl<<"the bill  file is         "<<temp<<endl;
return 0;
}