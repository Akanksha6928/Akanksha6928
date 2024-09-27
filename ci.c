#include <stdio.h>
#include <math.h>
 int main()
{
   int p,r,t;
   printf("enter p,r,t");
   scanf("%d %d %d",&p,&r, &t);
   float amt,ci;
   amt=p*pow(((1+r)/100),t);
   ci= amt -p;
    printf("compound interest is %f",ci);
    return 0;
    
}

