/*Average of 10 numbers using arrays */
#include<stdio.h>


main()
{
 int array[10], s=0, i; 
 printf("Enter 10 numbers");
 for(i=0; i<10; i++)
 {
  scanf("%d",&array[i]);
  s = s+array[i];
 }
 printf("\nSum=%d\n",s);
 printf("\nAvg = %d\n",s/10);
 
}

