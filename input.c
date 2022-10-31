#include <stdio.h>

int main()
{

    // Take input of integer number
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);
    printf("%d + %d = %d \n", a, b, a + b);

    // Take input of a float Number

    float c, d;
    scanf("%f", &c);
    scanf("%f", &d);
    printf("%.2f\n", c + d);

    // Character Input
    char e, f;
    scanf("%c", &e);
    scanf("%c", &f);
    printf("%c %c\n", e, f);

    return 0;
}