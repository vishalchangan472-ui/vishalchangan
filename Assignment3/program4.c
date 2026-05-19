#include<stdio.h>

void DisplayConvert(char ch)
{
    if(ch >= 'A' && ch <= 'Z')
    {
        ch = ch + 32;
        printf("converted character is %c", ch);
    }
    else if(ch >= 'a' && ch <= 'z')
    {
        ch = ch - 32;
        printf("converted character is %c", ch);
    }
    else
    {
        printf("Invalid character");
    }
}
int main()
{
    char cValue = '\0';

    printf("Enter character : \n");
    scanf("%c", &cValue);

    DisplayConvert(cValue);
    return 0;

}