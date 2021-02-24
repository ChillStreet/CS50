#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main ()
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

int remaining = cents % 25;

//Dimes = remaining / 10

int dimes = remaining / 10;

//Get remainder of remaining / 10

int remaining2 = remaining % 10;

//Nickels = remaining2 / 5

int nickels = remaining2 / 5;

//Get remainder of remaining2 / 5

int remaining3 = remaining2 % 5;

//Pennies = remaining3

int pennies = remaining3;

//Total number of coins

int coins = quarters + dimes + nickels + pennies;

//Print all coins to check values are correct

    printf("Quarters: %i\n", quarters);
    printf("Dimes: %i\n", dimes);
    printf("Nickels: %i\n", nickels);
    printf("Pennies: %i\n", pennies);
    printf("%i\n", coins);

}
