#include<stdio.h>
//using switch with char
int main()
{
    int a, b;
    int choice ;
    printf("Enter 2 int:");
    scanf("%d%d", &a, &b);
    printf("select an operation:");
    printf("\nA.add\nS.substract\nM.multiply\nD.divide");
    printf("\n Enter your choice:");
    fflush(stdin);
    scanf("%c", &choice);
    switch(choice)
    {
        case 'A':
        printf("\nsum is %d", a+b);
        break;
        case 'S':
        printf("\nDiff is %d", a-b);
        break;
        case 'M':
        printf("\nmulti is %d", a*b);
        break;
        case 'D':
        printf("\nDiv is %f", (float)a/b);
        break;
        default:
        printf("\nwrong choice");    
        }
        return 0;
}





