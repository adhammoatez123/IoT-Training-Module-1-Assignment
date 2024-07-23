/* note :
   to run write in terminal >> gcc Cshape.c
   then >> ./a.out
*/
#include <stdio.h>
void printletterC(char c);

int main()
{
    printf("Please enter a character to construct the letter 'C' using that character: ");
    char c;
    scanf("%c", &c); // taking a character input from user to construct letter C using it
    printletterC(c);
    return 0;
}

void printletterC(char c)
{
    // Outer loop iterates over rows 0 to 8
    for (int row = 0; row < 9; row++)
    {
        // nested inner loop to iterate over columns 0 to 4
        for (int col = 0; col < 5; col++)
        {
            // Conditions to print the character based on row and column
            if ((row == 0 || row == 8) && (col == 2 || col == 3 || col == 4)) // To print first and last row
                printf("%c ", c);
            else if ((row == 1 || row == 7) && (col == 1 || col == 4)) // To print second and eighth row
                printf("%c  ", c);
            else if (row >= 2 && row <= 6 && col == 0) // To rest of the rows only print the character and stop
            {
                printf("%c", c);
                break;
            }
            else
                printf(" ");
        }
        printf("\n"); // New line after outer loop(each row) ends
    }
}
