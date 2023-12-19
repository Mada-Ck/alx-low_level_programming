#include <stdio.h>

/**
 * main - Finds and prints the first 98 Fibonacci numbers,
 *        starting with 1 and 2, followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
    unsigned long int i, j, k, j1, j2, k1, k2;

    // Initialize the first two Fibonacci numbers
    j = 1;
    k = 2;

    // Print the first Fibonacci number
    printf("%lu", j);

    // Loop to calculate and print the next 96 Fibonacci numbers
    for (i = 1; i < 91; i++)
    {
        // Calculate the next Fibonacci number
        printf(", %lu", k);
        k = k + j;
        j = k - j;
    }

    // Break down the variables to handle numbers greater than 10^9
    j1 = j / 1000000000;
    j2 = j % 1000000000;
    k1 = k / 1000000000;
    k2 = k % 1000000000;

    // Loop to print the last 7 Fibonacci numbers
    for (i = 92; i < 99; ++i)
    {
        // Calculate and print the next Fibonacci number
        printf(", %lu", k1 + (k2 / 1000000000));
        printf("%lu", k2 % 1000000000);

        // Update variables for the next iteration
        k1 = k1 + j1;
        j1 = k1 - j1;
        k2 = k2 + j2;
        j2 = k2 - j2;
    }

    // Print a newline at the end
    printf("\n");

    // Return 0 to indicate successful execution
    return (0);
}
