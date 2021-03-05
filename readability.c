#include <cs50.h>
#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>

int count_letters(string input);

int main(void)
{
//Get text from user
    string input = get_string("Text: ");

//Calculate number of letters using count_letters function

    int letters  = count_letters(input);

    printf("%i letter(s)\n", letters);
}

int count_letters(string input)
//Count letters in the string
{
    int total = strlen(input);
    int count = 0;

    for (int i = 0; i < total; i++)
    {
        if (isalpha(input[i]))
        {
            count++;
        }
        else
        {
            count += 0;
        }

    }
    return count;
}
