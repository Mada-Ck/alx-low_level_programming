#include "main.h"

/**
 * _isalpha - Checks for Alphabetic Characters
 * @c: Alphabetic character
 * Return: 1 (True - alphabetic chars) OR 0 (False - not alphabetic char)
 */
int _isalpha(int c)
{
    // Check if the ASCII value of c corresponds to an alphabetic character
    // ASCII values for uppercase letters are between 65 ('A') and 90 ('Z')
    // ASCII values for lowercase letters are between 97 ('a') and 122 ('z')
    if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
    {
        // Return 1 if c is an alphabetic character
        return (1);
    }
    else
    {
        // Return 0 if c is not an alphabetic character
        return (0);
    }
}
