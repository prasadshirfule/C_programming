#include <stdio.h>

#define TRUE 1
#define FALSE 0
typedef int Bool;

Bool ChkEven(int iNo)
{
    if((iNo % 2) == 0)
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
    int iValue = 0;
    Bool bRet = FALSE;

    printf("Enter number : ");
    scanf("%d", &iValue);

    bRet = ChkEven(iValue);

    if(bRet)
    {
        printf("Given number is Even\n");
    }
    else 
    {
        printf("Given number is Odd\n");

    }
    return 0;
}