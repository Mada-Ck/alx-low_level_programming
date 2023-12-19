#include "main.h"

/**
 * jack_bauer - Print every minute of the day from 0:00 to 23:59
 * Return: void
 */
void jack_bauer(void)
{
    int hr1 = 0;
    int hr2 = 0;
    int sec1 = 0;
    int sec2 = 0;

    // Loop through the tens digit of the hour (hr1)
    while (hr1 < 3)
    {
        // Loop through the ones digit of the hour (hr2)
        while (hr2 <= 9)
        {
            // Break the loop if it reaches 24:00
            if (hr1 == 2 && hr2 == 4)
                break;

            // Loop through the tens digit of the minute (sec1)
            while (sec1 < 6)
            {
                // Loop through the ones digit of the minute (sec2)
                while (sec2 <= 9)
                {
                    // Print the hour and minute in the format HH:MM
                    _putchar(hr1 + '0');
                    _putchar(hr2 + '0');
                    _putchar(':');
                    _putchar(sec1 + '0');
                    _putchar(sec2 + '0');
                    _putchar('\n');
                    sec2++;
                }
                sec2 = 0; // Reset the ones digit of the minute
                sec1++;  // Move to the next tens digit of the minute
            }
            sec1 = 0;  // Reset the tens digit of the minute
            hr2++;    // Move to the next ones digit of the hour
        }
        hr2 = 0;      // Reset the ones digit of the hour
        hr1++;        // Move to the next tens digit of the hour
    }
}
