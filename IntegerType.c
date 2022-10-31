#include <stdio.h>

int main()
{
    // .. // .. //  Signed Integer Data .. // .. // .. //
    printf("------------ Signed Interger-----------\n");

    // short %d %hi
    short a = 50;
    printf("The short number is %hi\n", a);

    // int %d %i

    int b = 6600;
    printf("The interger number is %d\n", b);

    // long %ld

    long c = 1244L;
    printf("The long number is %ld\n", c);

    // long long %lld

    long long d = 121629LL;
    printf("The long long number is %lld\n", d);

    // Octal Number With Decimal Output (%o)

    int o = 00057;
    printf("The octal number is %o\n", o);
    printf("The decimal of the octal is %d\n", o);

    // Hexadecimal Number With Decimal Output(%X)

    int h = 0XFFF;
    printf("The hexadecimal number is %X\n", h);
    printf("The decimal of the hexadecimal is %d\n", h);

    // .. // .. // Unsigned Integer Data // .. // .. //

    printf("------------ Unsigned Interger-----------\n");

    // Unsigned short is -  %hu

    unsigned short us = 41;
    printf("The unsigned short number is %hu\n", us);

    // Unsigned int  -  %u
    unsigned int ui = 4776;
    printf("The unsigned int number is %u\n", ui);

    // Unsigned long  -  %lu
    unsigned long ul = 97746;
    printf("The unsigned long number is %lu\n", ul);

    // Unsigned long long  -  %llu
    unsigned long long ull = 17746656;
    printf("The unsigned long long number is %llu\n", ull);

    return 0;
}