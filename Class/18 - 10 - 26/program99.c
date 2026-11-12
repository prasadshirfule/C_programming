#include<stdio.h>
#include<stdlib.h>

void DisplayFactors (int iNo)
{
    int iCnt = 0;

    printf("Factors of %d : ", iNo);

    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if ((iNo % iCnt) == 0)
        {
            printf("%d  ", iCnt);
        }
    }
}

int main()
{
    int iValue = 0;

    printf ("Enter the number :");
    scanf ("%d", &iValue);

    DisplayFactors(iValue);

    return EXIT_SUCCESS;
}

// Time Complecity = O(n)