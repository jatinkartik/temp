#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,j,o,space, rows, k = 0, count = 0, count1 = 0,coef=0;
	printf("Enter the number of rows: ");
   scanf("%d", &rows);
	
	while(1)
	{
		printf("select one :\n1.half pyramid:\n2.inverted half pyramid:\n3.full pyramid:\ n4.inverted full pyramid:\n5. pascal triangle:\n6.exit\n Enter choice:");
		scanf("%d",&o);
		switch(o)
		{
			case1:
				for (i = 1; i <= rows; ++i)
				 {
      for (j = 1; j <= i; ++j) 
	  {
         printf("%d ", j);
      }
      printf("\n");
				
				
		}
		break;
		case 2:
			for (i = rows; i >= 1; --i)
			 {
      for (j = 1; j <= i; ++j)
	   {
         printf("%d ", j);
      }
      printf("\n");
   }
   break;
   case 3:
   	for (i = 1; i <= rows; ++i)
	    {
      for (space = 1; space <= rows - i; ++space)
	   {
         printf("  ");
         ++count;
      }
      while (k != 2 * i - 1)
	   {
         if (count <= rows - 1)
		  {
            printf("%d ", i + k);
            ++count;
         } else 
		 {
            ++count1;
            printf("%d ", (i + k - 2 * count1));
         }
         ++k;
      }
      count1 = count = k = 0;
      printf("\n");
   }
   break;
   case 4:
   	for (i = rows; i >= 1; --i)
	    {
      for (space = 0; space < rows - i; ++space)
         printf("  ");
      for (j = i; j <= 2 * i - 1; ++j)
         printf("* ");
      for (j = 0; j < i - 1; ++j)
         printf("* ");
      printf("\n");
   }
   break;
   case 5:
   	for (i = 0; i < rows; i++)
	    {
      for (space = 1; space <= rows - i; space++)
         printf("  ");
      for (j = 0; j <= i; j++) {
         if (j == 0 || i == 0)
            coef = 1;
         else
            coef = coef * (i - j + 1) / j;
         printf("%4d", coef);
      }
      printf("\n");
break;
case 6: exit(0);
}
return 0;
}
