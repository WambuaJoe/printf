#include "main.h"

/**
 * _int_print - this function prints an integer
 * @arguments: list of arguments pointing to integer
 *
 * Return: length of integer
 */

int _int_print(va_list arguments)
{
	int a, i, j;
	int k = 1;
	int count = 1;

	a = va_arg(arguments, int);

	if (a < 0)
	{
		_putchar('-');
		i = a * -1;
		k++;
	}
	else
		i = a;

	j = i;

	while (j > 9)
	{
		j /= 10;
		count *= 10;
	}

	while (count >= 1)
	{
		_putchar(((i / count) % 10) + '0');
		count /= 10;
		k++;
	}
	
	return (k);
}
