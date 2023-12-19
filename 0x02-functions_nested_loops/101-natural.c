#include <stdio.h>
#include <stdlib.h>

/**
 * main - main block
 * Description: Computes and prints the sum of all the multiples of 3 or
 * 5 below 1024 (excluded), followed by a new line.
 * Return: 0 on success
 */
int main(void)
{
    int c = 0;    // Initialize a variable 'c' to 0 to start the iteration.
    int sum = 0;  // Initialize a variable 'sum' to 0 to store the sum of multiples.

    while (c < 1024)  // Start a while loop that continues as long as 'c' is less than 1024.
    {
        // Check if the current value of 'c' is a multiple of 3 or 5.
        if (c % 3 == 0 || c % 5 == 0)
        {
            sum += c;  // If true, add the current value of 'c' to the 'sum'.
        }

        c++;  // Increment 'c' to move to the next number.
    }

    // Print the final sum of all multiples of 3 or 5 below 1024.
    printf("%i\n", sum);

    return (0);  // Indicate successful program execution.
}
