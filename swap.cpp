#include <stdio.h>

int main()

{

int n,i,j;

printf("Enter size of array : ");

scanf("%d",&n);

int a[n],temp;

printf("Enter %d numbers...",n);

for( i=0;i<n;i++)

{

printf("\n%d : ",i+1);

scanf("%d",&a[i]);

}



for( i=n-5;i<n;i++) // //Starting from 5th last element       //1 2 3 4 5 6 7 89

                                  // 4 1 2 3 5 6 7 89

{                                 // 5 4 1 2 3 6 7 89 

for( j=i;j>0;j--)                         //6 5 4 1 2 3 7 89

{                                 // 7 6 5 4 1 2 3 89

temp=a[j];                            // 89 7 6 5 4 1 2 3

a[j]=a[j-1];

a[j-1]=temp;

}

}

puts("Modified series...");

for(i=0;i<n;i++)

printf("%d ",a[i]);



}
