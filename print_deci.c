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
	unsigned int num;
	unsigned int div = 1;
	int count = 0;

	if (n < 0)
	{
		_putchar('-');
		count++;
		num = -n;

	} 
	else 
	{
		num = n;
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
	return (count);
}
