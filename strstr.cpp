#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;

int main(){
FILE *ptr;
char oldword[] = "{{name}}";

ptr = fopen("bill.txt","r");
char * str;
fgets(str,200,ptr);
int count = 0;
int i,j;
for ( i = 0; str[i] !='\0'; i++)
    {
        if (strstr(&str[i], oldword) == &str[i])
        {
            count++;
            // cout<<str[i]<<endl;
            // Jump over this word
           // i = i + oldWordLength - 1;
           break;
        }
    }
    for(i ;str[i]!='\0';i++){
        cout<<str[i];
    }
cout<<endl<<"the no of match is "<<count;
cout<<endl;
return 0;
}