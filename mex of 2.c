#include <stdio.h>
void main() 
{
   int x,y,z=0;
   printf("enter two numbers-");
   scanf("%d %d",&x, &y);
   
   if (z == x || z == y)
      z = x+1;
   if (z == x || z == y)
      z = z+1;
   
   printf("Mex of 2=%d",z);
}
