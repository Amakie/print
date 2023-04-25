#include <stdarg.h>
#include <stdio.h>
#include "main.h"

/**
 * _printf - the function produces output according to a format
 * ...: variadic function
 * @format: string to be printed
 * Return: number of character printed excluding the null byte
 */
int _printf(const char *format, ...)
{
	va_list args;

	va_start(args, format);

	int count = 0;

	while (*format != '\0')
	{
	if (*format == '%')
		{
		format++;
	if (*format == 'd' || *format == 'i')
		{
		int value = va_arg(args, int);

		printf("%d", value);
		count += snprintf(NULL, 0, "%d", value);
		}
	else if (*format == 's')
		{
		char *str = va_arg(args, char*);

		fputs(str, stdout);
		count += strlen(str);
		{
	else if (*format == '%')
		{
		putchar('%');
		count++;
		}
	else
		{

		return (-1);

		}

	else
		{

		putchar(*format);
		count++;
		}
	format++;
	}

	va_end(args);

	return (count);
}
