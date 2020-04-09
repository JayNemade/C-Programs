/*Passing values in Function */
#include<stdio.h>

void swap(float x, float y) 
{
 x=x+y;
 y=x-y;
 x=x-y;
}

main()
{
 float a,b,x,y; 
 void swap(float x, float y);
 printf("\nEnter 2 Nos to be swapped\n");
 scanf("%f%f",&a,&b);
 swap(a, b);
 printf("\nswapped a =%f and swapped b=%f\n",x,y);     
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

