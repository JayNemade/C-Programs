/*2D arrays */
#include<stdio.h>


main()
{
 int array[5][5];
 int z=0, x, y;
 printf("\n");
 for(x=0; x<5; x++)
 {
  
 for(y=0; y<5; y++)
  {
   array[x][y]=z;
   z++;
   printf("%d",z);
  }
  printf("\n");
 }
 printf("\n");
}


/*
 printf("Enter 10 numbers");
 for(i=0; i<10; i++)
 {
  scanf("%d",&array[i]);
  s = array[0];
 }
 for(i=0; i<10; i++)
 {
  if (array[i] >= array[i+1])
  array[i+1]= array[i];
 }

 printf("\nMax=%d\n",array[i-1]);
// printf("\nMin = %d\n",array[0]);
 
*/

