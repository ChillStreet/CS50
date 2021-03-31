#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    if (argc == 2)
//If only 2 arguments are input, iterate through second argument to check for digits
    {
        string key = argv[1];
        for (int i = 0; i < strlen(key); i++)
        {
//If any character is not a digit, return an error
            if (isdigit(key[i]) == 0)
            {
                printf("Usage: ./caesar key\n");
                return 1;
            }

        }
    }
//Return error if 2 arguments are not input
    else
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

//If inputted characters are all digits, convert 2nd argument from string to integer

    int keyint = atoi(argv[1]);

//Get plaintext from user

    string p = get_string("plaintext: ");

    printf("ciphertext: ");

//Use a for loop to iterate through plaintext

    for (int j = 0; j < strlen(p); j++)
    {
//If input is lowercase print calculated ciphertext
        if (islower(p[j]))
        {
            printf("%c", ((p[j] + keyint - 'a') % 26 + 'a'));
        }
//If input is uppercase print calculated ciphertext
        else if (isupper(p[j]))
        {
            printf("%c", ((p[j] + keyint - 'A') % 26 + 'A'));
        }
//Leave spaces, punctuation as they are
        else
        {
            printf("%c", p[j]);
        }
    }
    printf("\n");
    return 0;
