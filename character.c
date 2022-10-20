#include "main.h"

/**
 * char_printf - prints a character
 * @arguments: list of arguments pointing to character
 *
 * Return: length of character
 */

int char_printf(va_list arguments)
{
	char c;

	c = va_arg(arguments, int);

	(_putchar(c));
	
	return (1);
}
