#include "main.h"

/**
 * _puts_int - prints integers
 * @n: Number
 *
 * Return: n_bytes
 */

int _puts_int(int n)
{
	int n_bytes = 0;

	if (n == INT_MIN)
	{
		n_bytes += _puts_string("-2147483648");
		return (n_bytes);
	}
	if (n == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	if (n < 0 && n >= INT_MIN)
	{
		n_bytes += _putchar('-');
		n = -n;
	}
	if (n >= 10)
	{
		n_bytes += _puts_int(n / 10);
	}
	n_bytes += _putchar((n % 10) + '0');
	return (n_bytes);
}
