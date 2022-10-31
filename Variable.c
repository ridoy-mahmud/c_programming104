#include <stdio.h>

int main()
{
    // Inteser variable
    int a = 50;
    int b = 30;

    int c = a + b;
    printf("Sum of a + b  is %d\n", c);
    printf("\n");

    int x = 10;
    int y = 50;
    printf("%d + %d = %d\n ", x, y, x + y);
    printf("%d - %d = %d\n ", x, y, x - y);
    printf("%d * %d = %d\n ", x, y, x * y);
    printf("%d / %d = %d\n ", x, y, x / y);

    // Float number
    float k = 68.08f;
    int w = 44;
    float u = k + w;
    printf("%f\n", u);


    return 0;
}