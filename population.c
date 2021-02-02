#include <cs50.h>
#include <stdio.h>

int calculate(int);

int main(void)
{
    int start;

    // Prompt for start size

    do
    {
        start = get_int("Start size: \n");
    }
    while (start < 9);


    int end;

    // Prompt for end size

    do
    {
        end = get_int("End size: \n");
    }
    while (end < start);



    // Calculate number of years until we reach threshold

    int result;

    result = calculate(start);

    int count = 1;

    while (result < end)
    {
        result = calculate(result);
        count++;
    }

    // Print number of years

    if (start == end)
    {
        printf("Years: 0\n");

    }
    else
    {
        printf("Years: %i\n", count);

    }

    return 0;
}


//Function

int calculate(int n)
{
    int total;
    total = n + (n / 3) - (n / 4);
    return total;

}
