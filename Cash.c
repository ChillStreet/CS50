#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main ()
{
    float n;

    do
    {
        n = get_float("Change owed:");
    }
    while (n < 0);

    printf("%f", n );
}
