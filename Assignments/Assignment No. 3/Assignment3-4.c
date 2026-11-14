#include <stdio.h>
#include <ctype.h>

void DisplayConvert (char CValue)
{
        if(CValue >= 'a' && CValue <= 'z')
        {
            CValue = toupper(CValue);
            printf("%c", CValue);
        }
        else if(CValue >= 'A' && CValue <= 'Z')
        {
            CValue = tolower(CValue);
            printf("%c", CValue);
        }

    printf("\n");
}

int main()
{
    char cValue = '\0';

    printf("Enter character : ");
    scanf("%c", &cValue);

    DisplayConvert(cValue);

    return 0;
}