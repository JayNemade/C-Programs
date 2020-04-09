/*To find simple interest*/

#include<stdio.h>

main()
{
 float p, i, n, a;
 printf("Enter the Principle Value \n");
 printf("Enter the Interest Rate \n");
 printf("Enter the Period \n");
 scanf("%f",&p);
 scanf("%f",&i);
 scanf("%f",&n);
 a= p*n*i/100;
 printf("Amount after %f Years is \n %f \n",n, a);
}
