#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Prints all natural numbers from n to 98, followed by a new line.
 * @n: Starting number
 *
 * Description: Prints all natural numbers from n to 98, separated by commas
 * and followed by a new line.
 */
void print_to_98(int n)
{
    /* Case when n is less than 98 */
    while (n < 98)
    {
        printf("%i", n);  /* Print the current number */
        if (n != 97)       /* Check if not the last number */
            printf(", ");  /* Print comma and space if not the last number */
        n++;               /* Increment n for the next iteration */
    }

    /* Case when n is greater than 98 */
    while (n > 98)
    {
        printf("%i", n);  /* Print the current number */
        if (n != 99)       /* Check if not the last number */
            printf(", ");  /* Print comma and space if not the last number */
        n--;               /* Decrement n for the next iteration */
    }

    printf("98\n");  /* Print "98" and a new line after the loop */
}
