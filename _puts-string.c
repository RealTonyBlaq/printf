#include "main.h"

/**
 * _puts_string - prints a string
 * @str: the string pointer
 *
 * Return: number of bytes
 */

int _puts_string(char *str)
{
	int i = 0;

	if (str == NULL)
	{
		write(1, "(null)", sizeof("(null)") - 1);
		return (6);
	}
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	return (i);
}
