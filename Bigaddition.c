#include <cs50.h>
#include <stdio.h>

int main(void)
{
    long x = get_long("Input 1st number:");

    long y = get_long("Input second number:");

    printf("%li\n" , x + y);
}
