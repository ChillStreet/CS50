#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main()
{
    float dollars;

//Prompt user for positive input

    do
    {
        dollars = get_float("Change owed: ");
    }
    while (dollars < 0);

//Convert float to an integer in cents

    int cents = round(dollars * 100);

//Divide by 25 to find number of Quarters

    int quarters = cents / 25;

//Get remainder of cents / 25

    int change = cents % 25;

//Dimes = change / 10

    int dimes = change / 10;

//Get remainder of change / 10

    int remaining = change % 10;

//Nickels = remaining / 5

    int nickels = remaining / 5;

//Pennies = remainder of remaining / 5

    int pennies = remaining % 5;

//Total number of coins

    int coins = quarters + dimes + nickels + pennies;

//Print total number of coins

    printf("%i\n", coins);

}
