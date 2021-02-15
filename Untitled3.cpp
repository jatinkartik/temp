#include <stdio.h>

int main()

{ 

  int a,max=0,c,d,e,sum=0;

  float lf,sum1=0.0;

  printf("Enter the number of items ");

  scanf("%d",&a);

  int items[10],min=items[0];

  printf("Enter the item's price\n");

   

   for(int i=0;i<a;i++)

  {

  	scanf("%d",&items[i]);

  }

   

  for(int i=0;i<a;i++)

  {

  	sum+=items[i];

  }

   

  for(int i=0;i<a;i++)

  {

    max=max>items[i]?max:items[i];

	  min=items[i]<min?items[i]:min;

	}

	

	printf("Enter the loss %% in max and profit %% in min");

	scanf("%d%d",&c,&d);

	printf("Enter the profit %% in others");

	scanf("%d",&e);

	

	 lf=(d*min)/100-(c*max)/100 ;

	 printf(" %f ",lf);

	for(int i=0;i<a;i++)

  {

  	if(items[i]!=max || items[i]!=min)

  	lf+=(e*items[i])/100;

  	else

  	continue;

  }

  sum1=sum+lf;

   

   

	if(sum1>sum)

	printf("Profit on deal %f  %d %d %d %f ",lf,max,min,sum,sum1);

	else if(lf==0)

	printf("no profit no loss");

	else

	printf("loss on deal %f",lf);

	return 0;

}
