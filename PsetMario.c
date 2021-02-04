#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;

    // Get input from the user

    do
    {
        n = get_int("Height:");
    }
    while (n < 1 || n > 8);


    for (int i = 1; i <= n; i++) // Loop to count rows
    {
        for (int j = 0; j < (n - i); j++) // Loop to print dots
        {
            printf(" ");
        }
        for (int k = 0; k < i; k++) // Loop to print hashes
        {
            printf("#");
        }
        printf("\n");
    }
}
