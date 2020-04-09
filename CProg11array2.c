/*Maxima of 10 numbers using arrays */
#include<stdio.h>


main()
{
 int array[10], s=0, i; 
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
 
}

