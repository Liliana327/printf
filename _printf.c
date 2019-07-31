#include "holberton.h"
/**
 * _printf - function to print strings and int
 * @format: format
 * Return: arguments
*/
int _printf(const char *format, ...)
{
	int n;
	va_list arguments;

	va_start(arguments, format);

	if (format == NULL)
		return (-1);

	n = case_c(arguments, format);

	va_end(arguments);

	return (n);
}
