#include "main.h"
/**
 * jack_bauer - Prints every minute of the day of Jack Bauer, starting from
 * 00:00 to 23:59
 * hr = hour, mn = minutes
 * / 10 allows second digit to rotate
 * the for loop breaks before 24:00
 * Return: 24 hour clock on every new line
 */
void jack_bauer(void)
{
	int hr, mn;

	for (hr = 0; hr < 24; hr++)
	{
		for (mn = 0; mn < 60; mn++)
		{
			_putchar((hr / 10) + '0');
			_putchar((hr % 10) + '0');
			_putchar(':');
			_putchar((mn / 10) + '0');
			_putchar((mn % 10) + '0');
			_putchar('\n');
		}
	}
}
