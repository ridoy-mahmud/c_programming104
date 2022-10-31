#include <stdio.h>

int main()
{
    int num1, num2, num3;

    printf("Enter the first Number - ");
    scanf("%d", &num1);

    printf("Enter the second Number - ");
    scanf("%d", &num2);

    printf("Enter the third Number - ");
    scanf("%d", &num3);

    if (num1 > num2 && num1 > num3)
    {
        printf("\n Number %i is largest \n", num1);
    }
    else if (num2 > num1 && num2 > num3)
    {
        printf("\n Number %i is largest \n", num2);
    }
    else if (num3 > num1 && num3 > num2)
    {
        printf("\n Number %i is largest \n", num3);
    }
    else
    {
        printf("Invalid Input..!!");
    }

    return 0;
}