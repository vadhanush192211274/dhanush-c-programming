#include<stdio.h>
#include<math.h>
int square(int x);
int main()
{
    int a,sq;
    printf("enter the number to be squared:");
    scanf("%d",&a);
    sq=square(a);
    printf("square=%d",sq);
    return 0;
}
int square(int x)
{
int g;
g=x*x;
return g;
}
output:
enter the number to be squared:4
square=16
