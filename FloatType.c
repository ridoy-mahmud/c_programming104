#include <stdio.h>

int main(void)
{
    // Float type - %f
    float a = 56.86;
    printf("The Float Number is - %.2f\n", a);

    // Double type -%lf
    double b = 7459.9083;
    printf("The Double Number is - %.4lf\n", b);

    // Double Double type -%Lf
    double c = 976444591.683;
    printf("The Double Double Number is - %Lf\n", c);

    return 0;
}