#include "main.h"

/**
 * int_conversion - conversion specifier for integer
 * @args: input string
 * @str: string
 * @n: integer
 * Return: number of characters printed
 */
int int_conversion(va_list args, char *str, unsigned int n)
{
	int int_add;
	unsigned int int_ad, a, int_tmp, neg, divide;

	int_add = va_arg(args, int);
	neg = 0;
	if (int_add < 0)
	{
		int_ad = int_add * -1;
		n = handle_buf(str, '-', n);
		neg = 1;
	}
	else
	{
		int_ad = int_add;
	}

	int_tmp = int_ad;
	divide = 1;

	while (int_tmp > 9)
	{
		divide *= 10;
		int_tmp /= 10;
	}

	for (a = 0; divide > 0; divide /= 10, a++)
	{
		n = handle_buf(str, ((int_ad / divide) % 10) + '0', n);
	}
	return (a + neg);
}
