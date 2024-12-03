#include<stdio.h>
int main(){
    int a,b;
    int choice;
    printf("inter 2 integer:");
    scanf("%d %d",&a,&b);
printf("select an operation:");
printf("\n1.add\n2.subtract\n3.multiply\n4.divide:");
printf("\nenter your choice;");
scanf("%d",&choice);
switch(choice)
{
    case 1:
    printf("sum is %d",a+b);
    break;
    case 2:
    printf("diff is %d",a-b);
    break;
    case 3:
    printf("multi is %d",a*b);
    break;
    case 4:
    printf("div is %f",(float)a/b);
    break;
    default:
    printf:("wrong choice");
}
return 0;
}