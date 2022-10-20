#include "main.h"
#include <stdio.h>

/**
 *main - print string using putchar
 *stringptr: - pointer to string
 *string_printf: - print string
 *Return: string length
 */
int _string_printf(char *stringptr)
{
	int i = 0;

	while (stringptr[i] != '\n' && stringptr[i] != '\0')
	{
		putchar(stringptr[i]);
		i++;
	}
	return (i);
}
