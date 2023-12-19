#include "main.h"

/**
 * print_sign - Print the sign of a number
 * @n: Number to check
 * 
 * Return: 1 (if n is greater than zero) OR 0 (if n is zero) OR -1 (if n is less than zero)
 */
int print_sign(int n)
{
    // Check if n is greater than zero
    if (n > 0)
    {
        // Print '+' and return 1
        _putchar(43);
        return (1);
    }
    // Check if n is zero
    else if (n == 0)
    {
        // Print '0' and return 0
        _putchar(48);
        return (0);
    }
    // If n is less than zero
    else
    {
        // Print '-' and return -1
        _putchar(45);
        return (-1);
    }
}
