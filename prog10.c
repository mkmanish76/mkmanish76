#include<stdio.h>
//using ternary operator
int main()
{
    int a,b;
    printf("Enter 2 integer:");
    scanf("%d%d",&a,&b);
    (a>=b)?(a>b)?
    printf("Grater no is %d",a):
    printf("Both are equal"):
    printf("Grater no is %d",b);
}