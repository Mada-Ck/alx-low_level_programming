#include "main.h"

/**
 * print_alphabet_x10 - Prints the letters of the alphabet 10 times
 * Description: Prints the lowercase alphabet 10 times, with each set
 *               followed by a new line.
 * Return: void
 */
void print_alphabet_x10(void)
{
    // Loop 10 times to print the alphabet repeatedly
    for (int i = 0; i < 10; i++)
    {
        // Declare a variable to represent the current character
        char c;

        // Loop through the alphabet and print each letter
        for (c = 'a'; c <= 'z'; c++)
        {
            // Call _putchar to print the current letter
            _putchar(c);
        }

        // Print a newline character after printing the alphabet once
        _putchar('\n');
    }
}
