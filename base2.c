#include "main.h"

/**
 * conv_bin - Converts numbers from decimal to base two
 * @n: Number to be converted
 *
 * Return: n_bytes
 */

int conv_bin(unsigned int n)
{
	unsigned int k, i = 0;
	int binary[32] = {0};
	int j;

	if (n == 0)
	{
		_puts_int(0);
		return (1);
	}

	while (n > 0)
	{
		k = n % 2;
		binary[i] = k;
		i++;
		n /= 2;
	}

	for (j = i - 1; j >= 0; j--)
	{
		_puts_int(binary[j]);
	}

	return (i);
}
