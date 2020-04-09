
#include<stdio.h>

main()
{
 int y;
 printf("\n Enter the year\n");
 scanf("%d",&y);
/* if((y%4 ==0) && (y%100 !=0) )
  printf("\n%d is a leap year\n", y);
 else 
 if((y%400 ==0) )
  printf("\n%d is a leap year\n", y);
  else
   printf("\n%d is not a leap year\n", y);
*/
 if( ((y%100 ==0) && (y%400==0) ) || (y%100 !=0 && y%4 ==0))
  printf("\n%d is a leap year\n", y);
 else 
   printf("\n%d is not a leap year\n", y);


}
