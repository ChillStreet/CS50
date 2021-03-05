#include <cs50.h>
#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>

int count_letters(string input); //Counts letters
int count_words(string input);//Counts words
int count_sentences(string input); //Counts sentences

int main(void)
{
//Get text from user
    string input = get_string("Text: ");

//Calculate number of letters using count_letters function

    int letters  = count_letters(input);

//Calculate number of words using count_words function

    int words = count_words(input);

//Calculate number of sentenes using count_sentences function

    int sentences = count_sentences(input);

//Print number of letters

    printf("%i letter(s)\n", letters);

//Print number of words

    printf("%i word(s)\n", words);

//Print number of sentences

    printf("%i sentence(s)\n", sentences);
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

int count_words(string input)
//Count words in a string
{
    int total = strlen(input);
    int count = 0;

    for (int i = 0; i < total; i++)
    {
        if (isspace(input[i]))
        {
            count++;
        }
        else
        {
            count+= 0;
        }
    }
    return count +1;
}

int count_sentences(string input)
//Count sentences in a string
{
    int total = strlen(input);
    int count = 0;

for (int i = 0; i < total; i++)
    {
        if (input[i] == '.' || input[i] == '!' || input[i] == '?')
        {
            count++;
        }
        else
        {
            count+= 0;
        }
    }
    return count;
}
