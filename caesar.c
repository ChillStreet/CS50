#include <cs50.h>
#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main (int argc, string argv[])
{
    if (argc == 2)
    {
        printf("Success \n");
        printf("%s \n", argv[1]);
    }
    else
    {
        printf("Usage: ./caesar key\n");
    }
}
