#include <stdio.h>

typedef int Bool;
#define TRUE 1;
#define FALSE 0;

Bool Check (int iNo)
{
    if ((iNo % 5)  == 0)
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

    printf("Enter the number : ");
    scanf("%d", &iValue);

    bRet = Check(iValue);

    if(bRet)
    {
        printf("Number is Divisible by 5");
    }
    else
    {
        printf("Number is not Divisoble by 5");
    }

    return 0;


}