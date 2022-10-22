#include "main.h"
#include <stdint.h>

void unsigned_number_to_string(uint64_t number, int base, char *buffer)
{
	if (number == 0)
	{
		*buffer++ = '0';
		*buffer = 0;
		return;
	}

	/*base*/
	char buf[65];
    int i;
	for(int i = 0; i < 17; i++)
		buf[i] = 0;

	int cur = 0;

	while (number)
	{
		int digit = number % base;
		if (digit >= 10)
		{
			buf[cur++] = 'a' + (digit - 10);
		}
		else
		{
			buf[cur++] = 'a' + digit;
		}

		number /= base;
	}

	for (int i = cur - 1; i != 0; i--)
		*buffer++ = buf[i];
	*buffer++ = buf[0];
	*buffer = 0;
}

void number_to_string(uint64_t number, int base, char *buffer)
{
	if (number < 0)
	{
		*buffer++ = '-';
		number = -number;
	}
	unsigned_number_to_string(number, base, buffer);
}

void vprintf(const char *format, va_list arguments)
{
	int state = 0;

	while (*format)
	{
		if (state == 0)
		{
			if (*format == '%')
			{
				state = 1;
			}
			else
			{
				_putchar(*format);
			}
		}
		else if (state == 1)
		{
			switch (*format)
			{
			case 'c':
			{
				char ch = (char)va_arg(arguments, int);
				_putchar(ch);
				break;
			}
			case 's':
			{
				const char *s = (char *)va_arg(arguments,
							       const char *);
				while (*s)
				{
					_putchar(*s++);
				}
				break;
			}
			case 'd':
			{
				int n = va_arg(arguments, int);

				char buf[32];
				number_to_string(n, 10, buf);
				for (int i = 0; buf[i]; i++)
				{
					_putchar(buf[i]);
				}
				break;
			}
			case 'x':
			{
				int n = va_arg(arguments, int);

				char buf[32];
				number_to_string(n, 16, buf);
				for (int i = 0; buf[i]; i++)
				{
					_putchar(buf[i]);
				}
				break;
			}
			case 'p':
				_putchar('0');
				_putchar('x');
				break;
			}
			state = 0;
		}

		*format++;
	}
}


void _printf(const char *format, ...)
{

	va_list arguments;
	va_start(arguments, format);

	_vprintf(format, arguments);

	va_end(arguments);
}

int main()
{

	void unsigned_number_to_string();
	void *pointer_to_main = (void *)main;

	_printf("Print a character: %c. Done!\n", 'G');
	_printf("Print a string: %s. Done!\n", "Hello World");
	_printf("Print a positive integer: %d. Done!\n", 10);
	_printf("Print a negative integer: %d. Done!\n", -10);
	_printf("Print a (zero) integer: %d. Done!\n", 0);
	_printf("Print a hexademical: %x. Done!\n", '0');
	_printf("Print a zero hexademical: %x. Done!\n", '0');
	_printf("Print a pointer: %p. Done!\n", pointer_to_main);

	return 0;
}
