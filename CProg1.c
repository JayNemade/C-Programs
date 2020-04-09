/*Difference of sum and diff of two values using only 2 variables*/

#include<stdio.h>

main()
{
 int a, b;
 printf("Enter the Values of a and b \n");
 scanf("%d%d",&a,&b);
 a= a+b; b= a-b; a=a-b;
 printf("\n %d\t%d\n",a,b);
}
