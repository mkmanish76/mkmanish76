#include <stdio.h>
//using switch for checking vowel letter
int main()
{
    char ch;
    printf("Enter a character:");
    scanf("%c",&ch);
    switch(ch)
    {
        case'A': case'E': case'I': case'O': case'U':
        printf("It is a vowel");
        break;
        default:
        printf("Not a vowal");
    }
    return 0;
}