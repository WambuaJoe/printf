#include "main.h"

/*
 * _printf - function that produces output according to a
 *           specified format
 * @format: character string composed of zero, or more, directives
 *
 * Return: returns the length of the output
 */

int _printf(const char *format, ...)
{
	va_list arguments;

	_prints specifier[] = {
		{"c", char_printf},
		{"s", _string_printf},
		{"i", _int_print},
		{"d", _print_dec},
	};
	int i = 0, j = 0;
	int len_specifier;

	va_start(arguments, format);

	len_specifier = sizeof(specifier) / sizeof(specifier[0]);
}
