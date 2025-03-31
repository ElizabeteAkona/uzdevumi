#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // get line count
    int n = 0;
    do
    {
        n = get_int("Height: ");
    }
    while ((n < 1) || (n > 8));

    // row numbers
    for (int i = 1; i <= n; i++)
    {
        // position numbers
        for (int j = 1; j <= n; j++)
        {
            if (j > n - i)
            {
                printf("#");
            }
            else
            {
                printf(" ");
            }
            if (j == n)
            {
                printf("\n");
            }
        }
    }
}
