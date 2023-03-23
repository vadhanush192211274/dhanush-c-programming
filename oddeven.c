#include<stdio.h>
#include<math.h>
int oddeven(int x);
int main()
{
    int a,ans,odd,even;
    printf("enter the number:");
    scanf("%d",&a);
    ans=oddeven(a);
    
}
int oddeven(int x)


{
    if(x%2==0)
{
    printf("the given number is even");
    
}
else
    printf("the given number is odd");
}
output:
enter the number:302
the given number is even
