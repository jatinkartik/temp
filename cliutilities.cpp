#include<stdio.h>

int main(int argc, char const *argv[])
{
    int i = 1;
  printf("the value of argument is %d ",argc);
  for(int j =1 ; j <argc; j++){

  printf("\n");
  printf("this argument value of %d is %s ",i,argv[j]);
  }
  printf("\n");
    return 0;
}
