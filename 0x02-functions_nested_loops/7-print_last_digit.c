#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @n: A number
 * Return: Last digit of n
 */
int print_last_digit(int n)
{
    int last_digit;

    // Check if n is negative
    if (n < 0)
    {
        // Calculate the last digit for negative numbers
        last_digit = (n % 10) * -1;
    }
    else
    {
        // Calculate the last digit for non-negative numbers
        last_digit = n % 10;
    }

    // Print the last digit
    _putchar(last_digit + '0');

    // Return the last digit
    return (last_digit);
}
