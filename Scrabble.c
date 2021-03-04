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
        printf ("Player1 wins!\n");
        printf("%i \n", score1);
        printf("%i \n", score2);
    }
    else if (score1 < score2)
    {
        printf ("Player2 wins!\n");
        printf("%i \n", score1);
        printf("%i \n", score2);
    }
    else
    {
        printf ("Tie!\n");
        printf("%i \n", score1);
        printf("%i \n", score2);
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
    if (islower(word[i]))
    {
        position = word[i] - 97;
        score += POINTS[position];
    }
    else if (isupper(word[i]))
    {
        position = word[i] - 65;
        score += POINTS[position];
    }
    else
    {
        score = 0;
    }
    }
    return score;
}
