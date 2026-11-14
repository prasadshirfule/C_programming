#include <stdio.h>

typedef int Bool;

#define TRUE 1
#define FALSE 0

Bool ChkVowel (char CValue)
{
        if(CValue == 'a' || CValue == 'e' || CValue == 'i' || CValue == 'o' || CValue == 'u' ||
           CValue == 'A' || CValue == 'E' || CValue == 'I' || CValue == 'O' || CValue == 'U')
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
    Bool bRet = FALSE;

    printf("Enter character : ");
    scanf("%c", &cValue);

    bRet = ChkVowel(cValue);

    if(bRet == TRUE)
    {
        printf("It is a Vowel\n");
    }
    else
    {
        printf("It is not a vowel\n");
    }

    return 0;
}