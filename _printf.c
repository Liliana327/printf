#include "holberton.h"
/**
 * _printf - function to print strings and int
 * @format: format
 * Return: arguments
*/
int _printf(const char *format, ...)
{
	va_list arguments;
	int ct = 0;

	va_start(arguments, format);

	if (format == 0)
		return (-1);

	ct = _cases_c(arguments, format);

	va_end(arguments);

	return (ct);
}
