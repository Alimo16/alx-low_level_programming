#include "main.h"
#include <unistd.h>
/**
 * _putchar - Prints char c to stdout
 * @c: The char to print
 *
 * Return: On success 1.
 * On error, return -1, and set errno.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
