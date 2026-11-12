#include<stdio.h>
#include<stdlib.h>

void CheckDivisible (int iNo)
{
    if ((iNo % 3)  == 0)
    {
        printf("it is divisible \n");
    }

    else
    {
        printf ("It is not divisible\n");
    }
}

int main()
{
    int iValue = 0;

    printf ("Enter the number :");
    scanf ("%d", &iValue);

    CheckDivisible(iValue);

    return EXIT_SUCCESS;
}