#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int count_letters(string input);
int count_sentences(string input);
int count_words(string input);

int main(void)
{
    string input = get_string("Text: ");
    int lttr_count = count_letters(input);
    int sntncs_count = count_sentences(input);
    int wrd_count = count_words(input);
    // printf("%i %i %i\n", lttr_count, wrd_count, sntncs_count);
    float L = (float) lttr_count / wrd_count * 100;
    float S = (float) sntncs_count / wrd_count * 100;
    // printf("%f\n", L);
    int index = round(0.0588 * L - 0.296 * S - 15.8);
    if (index < 17)
    {
        if (index < 1)
        {
            printf("Before Grade 1\n");
        }
        else
        {
            printf("Grade %i\n", index);
        }
    }
    else
    {
        printf("Grade 16+\n");
    }
}

int count_letters(string input)
{
    int len = strlen(input);
    int total = 0;
    for (int i = 0; i < len; i++)
    {
        // if  (isupper(input[i]) || islower(input[i]))
        if (isalpha(input[i]))
        {
            total += 1;
        }
    }
    return total;
}
int count_sentences(string input)
{
    int len = strlen(input);
    int total = 0;
    for (int i = 0; i < len; i++)
    {
        if (input[i] == '.' || input[i] == '!' || input[i] == '?')
        {
            total += 1;
        }
    }
    return total;
}
int count_words(string input)
{
    int len = strlen(input);
    int total = 1;
    for (int i = 0; i < len; i++)
    {
        if (input[i] == ' ')
        {
            total += 1;
        }
    }
    return total;
}
