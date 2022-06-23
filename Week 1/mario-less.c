#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //integers for commands below
    int height, row, column, space;
    do
    {
        //Asks how tall it will be
        height = get_int("Enter Height Here: ");
    }
    //Making it so that people can choose only to 1-8
    while (height < 1 || height > 8);

    for (row = 0; row < height; row++)
    {
        for (space = 0; space < height - row - 1; space ++)
        {
            printf(" ");
        }
        for (column = 0; column <= row; column++)
        {
            printf("#");
        }
        printf("\n");
    }
}
