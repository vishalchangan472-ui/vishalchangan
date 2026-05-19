#include<stdio.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL CheckVowel(char ch)
{
    if(ch == 'a' || ch == 'e' || ch =='i' || ch == 'o' || ch == 'u')
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}
int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter character : \n");
    scanf("%c", &cValue);

    bRet = CheckVowel(cValue);

    if(bRet == TRUE)
    {
        printf("%c is a vowel", cValue);
    }
    else
    {
        printf("%c is not a vowel", cValue);
    }
    return 0;
}