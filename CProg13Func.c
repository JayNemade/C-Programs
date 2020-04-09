/*Passing values in Function */
#include<stdio.h>

main()
{
 int a,b,c,sum;
 printf("Enter 3 Nos to be added");
 scanf("\n%d%d%d\n",&a &b &c);
 sum=calsum(a,b,c);
 printf("Sum=%d",sum);
  
 calsum(x, y, z) 
 {
  int x, y, z, d;
  d=x+y+z;
  return(d);
 }    
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

