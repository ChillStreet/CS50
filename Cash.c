#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main ()
{
    float dollars;

//Prompt user for positive input

    do
    {
        dollars = get_float("Change owed:");
    }
    while (dollars < 0);

//Convert float to an integer in cents

int cents = round(dollars * 100);


    printf("%i\n", cents);
}
