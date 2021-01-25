#include <cs50.h>
#include <stdio.h>

int main(void)
{   // Get numbers from user
    int x = get_int("Input 1st number:");
    int y = get_int("Input 2nd number");
    
    // Divide x by y
    float z = (float) x / (float) y;
    printf("%f\n", z);
}
