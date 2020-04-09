/*Pattern Printing */
#include<stdio.h>

main()
{
 int age;
 
 vote:
 printf("your are eligible for voting");
   printf("\n");
 novote:
 printf("your are not eligible for voting");


 for(i=m; i>=0; i--)
 {
 for(j=i; j>0; j--)
 {
  printf(" *");
 }

 printf("\n");
 for(k=0; k<=m-i; k++)
 {
  printf(" ");
 }
}


}
