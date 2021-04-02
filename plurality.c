
#include <cs50.h>
#include <stdio.h>
#include <string.h>

// Max number of candidates
#define MAX 9

// Candidates have name and vote count
typedef struct
{
    string name;
    int votes;
}
candidate;

// Array of candidates
candidate candidates[MAX];

// Number of candidates
int candidate_count;

// Function prototypes
bool vote(string name);
void print_winner(void);

int main(int argc, string argv[])
{
    // Check for invalid usage
    if (argc < 2)
    {
        printf("Usage: plurality [candidate ...]\n");
        return 1;
    }

    // Populate array of candidates
    candidate_count = argc - 1;
    if (candidate_count > MAX)
    {
        printf("Maximum number of candidates is %i\n", MAX);
        return 2;
    }
    for (int i = 0; i < candidate_count; i++)
    {
        candidates[i].name = argv[i + 1];
        candidates[i].votes = 0;
    }

    int voter_count = get_int("Number of voters: ");

    // Loop over all voters
    for (int i = 0; i < voter_count; i++)
    {
        string name = get_string("Vote: ");

        // Check for invalid vote
        if (!vote(name))
        {
            printf("Invalid vote.\n");
        }
    }

    // Display winner of election
    print_winner();
}

// Update vote totals given a new vote
bool vote(string name)
{
// Loop through candidates to find matching name
    for(int i = 0; i < candidate_count; i++)
    {
//If vote name matches a candidate name stored in the candidates array add 1 to vote count for that candidate
        if(strcmp(candidates[i].name, name) == 0)
        {
//Add 1 to vote count
            candidates[i].votes++;
//Test print to check count works
            printf("%i\n", candidates[i].votes);
            return true;
        }
    }
    return false;
}

// Print the winner (or winners) of the election
void print_winner(void)
{

// Tracks winning vote amount
    int winvotes = 0;
// Tracks candidate we are looking at
    int thisguy = 0;

    while(thisguy < candidate_count)
    {
        if( winvotes < candidates[thisguy].votes)
        {
//Update winvotes the thisguy's number of votes
            winvotes = candidates[thisguy].votes;
        }
//Move to next candidate in the struct
        thisguy++;
    }

    for (thisguy = 0; thisguy < candidate_count; thisguy++)
    {
        if(candidates[thisguy].votes == winvotes)
        {
//Print the winner. ie the person who's vote count is equal to winvotes
            printf("%s\n", candidates[thisguy].name);
        }
    }
return;

}
