#include "main.h"

/**
 * puts_half - prints half of a string
 * followed by a new line
 * @str: the string to be printed
 */
void puts_half(char *str)
{
	int len, n, i;

	len = 0;

	while (str[i] != '\0')
	{
	len++;
	}
if (len % 2 == 0)
{
for (i = len / 2; str[i] != '\0'; i++)
{
_putchar(str[i]);
}
else if (len % 2 != 0)
{
	for (n = (len - 1) / 2; n < len - 2; n++)
	{
		_putchar(str[n + 1]);
	}
}
_putchar('\n');
}
