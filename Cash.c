#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main ()
{
    float n;

//Prompt user for input

    do
    {
        n = get_float("Change owed:");
    }
    while (n < 0);

//Convert float to an integer in cents

int i = n * 100 + 0.5;


    printf("%d", i );
}
