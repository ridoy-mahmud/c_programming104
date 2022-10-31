#include <stdio.h>

int main()

{
    int year;
    printf("Enter The Year - ");
    scanf("%d", &year);

    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
            {
                printf("Leap year");
            }
            else
            {
                printf("Not a leap year");
            }
        }
        else
        {
            printf("Is a leap year");
        }
    }
    else
    {
        printf("Not a Leap Year");
    }
    return 0;
}