#include <cs50.h>
#include <ctype.h>
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

    // TODO: Print the winner
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
{
    // TODO: Compute and return score for string
    // printf("From function: %s\n", word);

    int i = 0;
    int punkti = 0;
    int l_index;

    while (word[i])
    {
        if (isupper(word[i]))
        {
            l_index = word[i] - 65;
            punkti = punkti + POINTS[l_index];
        }
        if (islower(word[i]))
        {
            l_index = word[i] - 97;
            punkti = punkti + POINTS[l_index];
        }
        // printf("Letter: %c - %i, punkti: %i\n",word[i],word[i],POINTS[l_index]);
        i++;
    }

    return punkti;
}
