#include "main.h"

/**
 * _abs - Computes the absolute value of an integer
 * @a: The integer to be computed
 * Return: Absolute value of a
 */
int _abs(int a)
{
    // Check if a is non-negative
    if (a >= 0)
    {
        // If a is non-negative, return a as is
        return (a);
    }
    else
    {
        // If a is negative, return the negation of a
        return (a * -1);
    }
}
