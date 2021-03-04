#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>

// Points assigned to each letter of the alphabet
int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int compute_score(string word);

int main(void)
{
    // Get input words from both players
    string word1 = get_string("Player 1: ");
    string word2 = get_string("Player 2: ");

    // Score both words
    int score1 = compute_score(word1);
    int score2 = compute_score(word2);

    //Print the winner

    if (score1 > score2)
    {
        printf("Player 1 wins!\n");
    }
    else if (score1 < score2)
    {
        printf("Player 2 wins!\n");
    }
    else
    {
        printf("Tie!\n");
    }
}

int compute_score(string word)
// Compute and return score for string
{
    int wordlength = strlen(word);
    int score = 0;
    int position;
    for (int i = 0; i < wordlength; i++)
    {
// Calculate score if a char is lowercase using ASCII

        if (islower(word[i]))
        {
            position = word[i] - 97;
            score += POINTS[position];
        }
// Calculate score if a char is uppercase using ASCII

        if (isupper(word[i]))
        {
            position = word[i] - 65;
            score += POINTS[position];
        }
// Allocate any other symbol a score of 0

        else
        {
            score += 0;
        }
    }
    return score;
}
