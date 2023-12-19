#include "main.h"
/**
 * main - Entry point
 * Description: prints '_putchar\n'
 * Return: Always 0 (success)
 */
int main(void)
{
    // Declare and initialize a character array with the value "_putchar"
    char str[] = "_putchar";
    // Initialize an index variable
    int i = 0;

    // Loop through each character in the string until the null terminator is encountered
    while (str[i] != '\0')
    {
        // Assign the current character to a variable
        char c = str[i];
        // Call the _putchar function to print the current character
        _putchar(c);
        // Increment the index to move to the next character in the string
        i++;
    }

    // Return 0 to indicate success
    return (0);
}
