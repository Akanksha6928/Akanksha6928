#include <stdio.h>
 int main()
{
   int a,b,c;
   printf("enter a and b");
   scanf("%d %d",&a,&b);
   a=a+b;
   b=a-b;
   a=a-b;
   printf("a is %d and b is %d",a,b);
   return 0;

}

