#include "main.h"

/**
 * _printf - conversion specifier for integer
 * ...: varidic function
 * @format: string
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list mylist;
	int num_chars = 0;
	int value = 0;

	va_start(mylist, format);

	for (; *format != '\0'; format++)
	{
		if (*format == '%')
		{	format++;
			if (*format == 'd' || *format == 'i')
			{

				value += va_arg(mylist, int);
				printf("%d", value);
				num_chars++;
			}

			else
			{
				printf("unhandled specifier: %%%c", *format);
			}
		}
		else
		{
			putchar(*format);
			num_chars++;
		}
	}

	va_end(mylist);
	return (num_chars);
}
