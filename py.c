#include<stdio.h>
int main()
{
    int k,j=1,m,n,p,l,mat[10][10],trans[10][10];
    printf("enter the number of rows and column\n");
    scanf("%d %d",&p,&k);
for(l=0;l<p;l++)
{
    for(m=0;m<k;m++)
    {
        printf("enter the element %d:::::_____",j);
        scanf("%d",&mat[l][m]);
        j++;
    }
}
printf("displaying matrix enterd by user .........................................\n");
for(l=0;l<p;l++)
{
    for(m=0;m<k;m++)
    {
        printf("%d\t",mat[l][m]);
    }
    printf("\n");
}

printf("transpose of matrix ........................................................\n");
for(l=0;l<p;l++)
{
    for(m=0;m<k;m++)
    {
       trans[m][l] = mat[l][m];
    }
}

for(m=0;m<p;m++)
{
for(l=0;l<k;l++)
    {
        printf("%d\t",trans[m][l]);
    }
    printf("\n");
}
return 0;
}