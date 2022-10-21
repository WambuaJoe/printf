#include <unistd.h>

/**
 * _putchar - this function writes the character c to stdout
 * @c: character to be printed
 *
 * Return: On success 1.
 * On error, -1 is returned, error is appropriately set.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
