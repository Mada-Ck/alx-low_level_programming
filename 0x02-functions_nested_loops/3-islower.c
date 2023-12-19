#include "main.h"

/**
 * _islower - Checks for lowercase character
 * @c: The character to be checked
 * Return: 1 (True - lowercase) OR 0 (False - not lowercase)
 */
int _islower(int c)
{
    // Check if the ASCII value of c corresponds to a lowercase letter
    // ASCII values for lowercase letters are between 97 ('a') and 122 ('z')
    if (c >= 97 && c <= 122)
    {
        // Return 1 if c is lowercase
        return (1);
    }
    else
    {
        // Return 0 if c is not lowercase
        return (0);
    }
}
