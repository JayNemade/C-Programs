/*Pattern Printing */
#include<stdio.h>

main()
{
 int i, j, n, m, k;
 printf("\n Enter two numbers\n");
 scanf("%d%d",&n,&m);
   printf("\n");
/* for(i=0; i<=m; i++) 
 {
  for(j=0; (j<i && j<n); j++)
  {
   printf("*\t");
   }
  printf("\n");
 }
*/

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


/* for(i=0; i<=m; i++) 
 {
  for(j=0; (j<i && j<n); j++)
  {
   for(k=0; k<i; k++)
   {
    printf("\t");
   } 
   printf("*");
   }
  printf("\n");
 }
*/
}
