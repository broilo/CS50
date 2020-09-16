#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int height, col, row;

    do
    {
        // Ask for an input related to the pyramid's height
        height = get_int("Height: \n");
    }
    // Defines the height's constraint (allowed values)
    while (height < 1 || height > 8);
    // Iterates the row-loop up to the height value
    for (row = 1; row <= height; row++)
    {
        // Iterates the col-loop up to the height value
        for (col = 1; col <= height; col++)
        {
            // Notice that we're inside the row-loop, so the pyramid
            // is built from top to bottom
            // Tells us where to put spaces
            if (col < (height - row + 1))
            {
                printf(" ");
            }
            // Tells us where to put hashes
            else
            {
                printf("#");
            }
        }
        printf("\n");
    }
}