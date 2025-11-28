#include "main.h"

/**
 * print_binary - prints an unsigned integer in binary format
 * @args: list of arguments
 *
 * Return: number of characters printed
 */

int print_binary(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);
	unsigned int bin = 1 << (sizeof(unsigned int) * 8 - 1);
	int count = 0;
	int started = 0;

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}

	while (bin)
	{
		if (n & bin)
		{
			_putchar('1');
			started = 1;
			count++;
		}
		else if(started)
		{
			_putchar('0');
			count++;
		}
		bin >>= 1;
	}

	return (count);
}
