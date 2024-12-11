#include<stdio.h>
int main()
{
    int n;
    printf ("Enter an integer:");
    scanf("%d",&n);
    (n>0)? printf("absolute is %d",n):
    printf ("absolute is %",-n);
    return 0;
}