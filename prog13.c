#include<stdio.h>
int main()
{
int n,i=1,sum=0;
printf("Enter an int:");
scanf("%d", &n);
while(i<=n)
{
sum=sum+i;
i=i+1;
}
printf ("sum is %d", sum);
return 0;
}
