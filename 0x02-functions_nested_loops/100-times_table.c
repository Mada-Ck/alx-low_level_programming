#include "main.h"

/**
 * print_times_table - prints times table
 * @n: times table to use
 * Return: void
 */
void print_times_table(int n)
{
    int a = 0, rep, b;

    // Check if n is within the valid range (0 to 15)
    if (n < 0 || n > 15)
        return;

    // Iterate over rows (a)
    while (a <= n)
    {
        // Iterate over columns (b)
        for (b = 0; b <= n; b++)
        {
            // Calculate the product of a and b
            rep = a * b;

            // Print the product with proper formatting
            if (b == 0)
                _putchar('0' + rep);
            else if (rep < 10)
            {
                _putchar(' ');
                _putchar(' ');
                _putchar('0' + rep);
            }
            else if (rep < 100)
            {
                _putchar(' ');
                _putchar('0' + rep / 10);
                _putchar('0' + rep % 10);
            }
            else
            {
                _putchar('0' + rep / 100);
                _putchar('0' + (rep - 100) / 10);
                _putchar('0' + rep % 10);
            }

            // Print comma and space if not the last column
            if (b < n)
            {
                _putchar(',');
                _putchar(' ');
            }
        }

        // Move to the next row
        _putchar('\n');
        a++;
    }
}
