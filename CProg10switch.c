/*use of switch to make calculator */
#include<stdio.h>


main()
{
 int m, n, k;
 char ch;
 printf("\nEnter two numbers to be operated\n");
 scanf("%d%d",&m,&n);
  printf("choice");
 printf("\nEnter a for addition\t s for substration \t m for multiplication\t and d for division\n");
 scanf("%c",&ch);
  switch(ch)
  {
//   printf("\nEnter two numbers to be operated\n");
//   scanf("%d%d",&m,&n);
   case 'a': 
   k= m+n;   printf("\n%d\n",k);
  break;

   case 's': 
   k= m-n;   printf("\n%d\n",k);
  break;
   case 'm': 
   k= m*n;   printf("\n%d\n",k);
  break;
   case 'd': 
   k= m/n;   printf("\n%d\n",k);
  break;
  }
}

