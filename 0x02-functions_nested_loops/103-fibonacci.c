#include <stdio.h>

/**
 * main - Finds and prints the sum of the even-valued terms
 * below 4,000,000 in the Fibonacci sequence, followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
    int i;
    unsigned long int j, k, next, sum;

    j = 1;
    k = 2;
    sum = 0;

    for (i = 1; i <= 33; ++i)  /* 33 iterations are sufficient to reach 4,000,000 */
    {
        if (j < 4000000 && (j % 2) == 0)
        {
            sum = sum + j;  /* Add even Fibonacci terms to sum */
        }
        next = j + k;  /* Calculate the next term in the Fibonacci sequence */
        j = k;  /* Update j to the current value of k */
        k = next;  /* Update k to the next value in the sequence */
    }

    printf("%lu\n", sum);  /* Print the sum of even Fibonacci terms */

    return (0);
}
