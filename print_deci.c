#include "main.h"
/**
 * print_deci - prints a decimal integer
 * @args: list of arguments
 * 
 * Return: number of characters printed
 */
int print_deci(va_list args)
{
	int n = va_arg(args, int);
	int num = n;
	int div = 1;
	int count = 0;

	if (num < 0)
	{
		_putchar('-');
		count++;
		num = -num;
	}

	if (num == 0)
	{
		_putchar('0');
		return (count + 1);
	}
	
	while ((num / div) >= 10) 
		div *= 10;

	while (div > 0)
	{
		_putchar ((num / div) + '0');
		count++;
		num %= div;
		div /= 10;
	}
	return (num);
}
