#include "main.h"

/**
 * puts_half - writes every other character
 * @str: input string to print
 * Description: prints every other character of string
 * Return: nothing
 **/

void puts_half(char *str)
{
	int i, j;

	i = 0;
	j = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	j = i / 2;

	if (i % 2 == 1)
		j++;

	while (j < i)
	{
		_putchar(str[j]);
		j++;
	}
	_putchar('\n');
}
