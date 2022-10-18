// Fibonacci series till n term
#include<stdio.h>
int main()    
{
int x=0,y=1,z=0,n;
printf("enter number till you want Fibonacci");
scanf("%d",&n);
for(;z<=n;z=x+y)
{
printf("%d",z);
x=y;
y=z;
printf("\n");
}
return 0;
}
