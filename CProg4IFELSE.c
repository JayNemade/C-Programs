
#include<stdio.h>

main()
{
 int a, b, c;
 printf("\n Enter the numbers a b and c for comparison\n");
 scanf("%d%d%d",&a,&b,&c);
 if(a>b)
  b=a;
 if(b>c)
  c=b;
 printf("\nMax = %d\n", c);
}
