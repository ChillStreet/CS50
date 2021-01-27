#include <stdio.h>

// Prototype
void meow(int n);

int main(void)
{
    meow (3);
}

//Use custom function in the for loop
void meow(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("meow\n");
    }
}
