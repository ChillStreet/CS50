#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int x = get_int("Input 1st number:");
    
    int y = get_int("Input second number:");
    
    printf("%i\n" , x + y);
}
