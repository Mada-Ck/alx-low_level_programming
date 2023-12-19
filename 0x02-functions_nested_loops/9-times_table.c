#include "main.h"

/**
 * times_table - Prints the nine times table starting from 0
 *
 * Return: void
 */
void times_table(void)
{
	int a, b, c; // Variables for row, column, and product

	for (a = 0; a <= 9; a++) // Outer loop for rows
	{
		_putchar(48); // Print the first digit of the product for the first column

		for (b = 1; b <= 9; b++) // Inner loop for columns
		{
			c = a * b; // Calculate the product

			_putchar(44); // Print comma and space
			_putchar(32);

			if (c <= 9)
			{
				_putchar(32);          // Print an extra space
				_putchar(c + 48);      // Print the ones digit of the product
			}
			else
			{
				_putchar((c / 10) + 48); // Print the tens digit of the product
				_putchar((c % 10) + 48); // Print the ones digit of the product
			}
		}

		_putchar('\n'); // Move to the next line after each row
	}
}
