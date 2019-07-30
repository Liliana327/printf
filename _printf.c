#include "holberton.h"
#include <stdarg.h>
/**
 * _printf - function to print strings and int
 * @format: format
 * Return: arguments
*/
int _printf(const char *format, ...)
{
	va_list arguments;
	int n = 0;

	va_start(arguments, format);

	if (format == '\0')
		return (-1);

	n = case_lst(format, arguments);

	va_end(arguments);

	return (n);
}
