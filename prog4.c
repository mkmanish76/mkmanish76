#include<stdio.h>
//using ternary operator 
int main()
{
    int x,y;
    printf ("Enter x:");
    scanf("%d",&x);
    (x>=0)?(y=1):(y=-1);
    printf("x=%d,y=%d",x,y);
    return 0;
}