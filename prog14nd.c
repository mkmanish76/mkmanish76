#include<stdio.h>
//uding While
int main(){
int a,b;
char ch='Y';
  while(ch=='Y')
{
printf ("Enter 2 int:");
scanf("%d%d",&a,&b);
printf("Sum is %d",a+b);
printf("\nDo you want repeat(Y/N)?");
fflush(stdin);
scanf("%c",&ch);
}
while (ch=='Y');
return 0;
}












