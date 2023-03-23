#include<stdio.h>
#include<math.h>
int prime(int x);
int main()
{
    int a, pr;
    printf("enter the number:");
    scanf("%d",&a);
    pr=prime(a);
}
int prime(int x)
{
if(x%1 ==0 && x%x==0)
    
printf("the given number is prime number");
    
   
else
{
printf("the given number is not a prime number, ");
}
}

