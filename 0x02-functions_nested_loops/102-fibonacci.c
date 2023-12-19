#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints the first 50 Fibonacci numbers, separated by commas.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
    // Initialize variables to store Fibonacci sequence numbers
    int inc;
    unsigned long n1 = 0, n2 = 1, n3;

    // Loop to generate the first 50 Fibonacci numbers
    for (inc = 0; inc < 50; inc++)
    {
        // Calculate the next Fibonacci number
        n3 = n1 + n2;

        // Print the current Fibonacci number
        printf("%lu", n3);

        // Update variables for the next iteration
        n1 = n2;
        n2 = n3;

        // Check if it's the last iteration
        if (inc == 49)
            printf("\n"); // Print newline at the end
        else
            printf(", "); // Print comma and space for other iterations
    }

    // Return 0 to indicate successful execution
    return (0);
}
