#include <stdio.h>
#include <stdbool.h>

// To Import a boolean Library have to use <stdbool.h>

int main(void)
{

    bool is_logged_in = false;

    if (is_logged_in)
    {
        printf("User Logged In Successfully\n");
    }
    else
    {
        printf("No Logged in\n");
    }

    return 0;
}