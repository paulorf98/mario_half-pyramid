#include <stdio.h>

int get_height(void);

int main(void)
{
    // Prompt user for pyramid height
    int height = get_height();
    
    printf("\n");

    // Iterate through each row to build the pyramid
    for (int i = 0; i < height; i++)
    {
        // Print leading spaces for right-alignment
        for (int j = 0; j < height - i - 1; j++)
        {
            printf(" ");
        }

        // Print hashtags for the current row
        for (int l = 0; l < i + 1; l++)
        {
            printf("#");
        }

        // Move to the next line
        printf("\n");
    }
}

// Prompt for a valid height between 1 and 8 (inclusive)
int get_height(void)
{
    int height;

    do
    {
        printf("Height: ");
        scanf("%d", &height);
    } while (height < 1 || height > 8);

    return height;
}