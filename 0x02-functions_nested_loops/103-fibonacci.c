#include <stdio.h>

/**
 * main - finds and prints the sum of the even-valued terms
 *        in the Fibonacci sequence below 4,000,000
 * Return: Always 0 (Success)
 */
int main(void)
{
    // Initialize variables
    int i;
    unsigned long int j, k, next, sum;

    // Initialize the first two numbers in the Fibonacci sequence
    j = 1;
    k = 2;
    // Initialize the sum to zero
    sum = 0;

    // Loop to find and sum even-valued Fibonacci terms below 4,000,000
    for (i = 1; i <= 33; ++i)  // 33 iterations are sufficient to reach 4,000,000
    {
        // Check if the current Fibonacci term is even and below 4,000,000
        if (j < 4000000 && (j % 2) == 0)
        {
            // Add the even term to the sum
            sum = sum + j;
        }
        // Calculate the next term in the Fibonacci sequence
        next = j + k;
        // Update j and k for the next iteration
        j = k;
        k = next;
    }

    // Print the sum of even-valued Fibonacci terms
    printf("%lu\n", sum);

    // Return 0 to indicate successful completion
    return (0);
}
