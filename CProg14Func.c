/*Passing values in Function */
#include<stdio.h>

 float square(float x) 
 {
  float y;
  y=x*x;
  return(y);
 }

main()
{
 float a,b; 
 float square(float x);
 printf("\nEnter a Nos to be squared\n");
 scanf("%f",&a);
 b=square(a);
 printf("\nSquare of %f=%f\n",a,b);     
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

