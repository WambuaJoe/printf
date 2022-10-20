#include "main.h"

/**
 *_string_printf - function that prints string
 *@arguments: list of arguments passed
 *Return: string length
 */
int _string_printf(va_list arguments)
{
	char *strptr;
	int i = 0;

	strptr = va_arg(arguments, char *);

	while (strptr[i] != '\n' && strptr[i] != '\0')
	{
		putchar(strptr[i]);
		i++;
	}
	return (i);
}
