#include <stdio.h>

int main()
{
    // In This Way We Can Declare a String in C ( string - %s)

    char name[30] = "Mahamudul Hasan Ridoy";
    printf("My Name is - %s\n", name);

    char myName[50];
    printf("Enter Your Phone Number - ");
    scanf("%s\n", &myName);

    return 0;
}