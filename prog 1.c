#include<stdio.h>
//using switch
int main()
{
    int a, b;
    int choice ;
    printf("Enter 2 int:");
    scanf("%d %d",&a,&b);
    printf("select an operation:");
    printf("\n1.add\n2.substract\n3.multiply\n4.divide:");
    printf("\nEnter your choice;");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        printf("sum is %d", a+b);
        break;
        case 2:
        printf("Diff is %d",a-b);
        break;
        case 3:
        printf("multi is %d",a*b);
        break;
        case 4:
        printf("Div is %f",(float)a/b);
        break;
        default:
        printf:("wrong choice");    
        }
        return 0;
}





