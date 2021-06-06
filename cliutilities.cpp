#include<iostream>
#include<cstring>
using namespace std;


int main(int argc, char *argv[])
{
  int no1,no2;
  char * copy;
  copy = argv[1];
 no1 = atoi(argv[2]);
 no2 = atoi(argv[3]);

if(strcmp(copy,"add")==0)
  cout<<no1+no2<<endl;
if(strcmp(copy,"sub")==0)
  cout<<no1-no2<<endl;
if(strcmp(copy,"rem")==0)
  cout<<no1%no2<<endl;
if(strcmp(copy,"mul")==0)
  cout<<no1*no2<<endl;
if(strcmp(copy,"div")==0)
  cout<<no1/no2<<endl;
  printf("\a");
    return 0;
}
