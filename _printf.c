#include "holberton.h"
/**
 * _printf - function that clones printf program
 * @format: format 
 * Return: amount of arguments printed
*/
int _printf(const char *format, ...)
{
	va_list arguments;
	int ct = 0; /* counter for printed variables */

	va_start(arguments, format);

	if (format == 0)
		return (-1);

	ct = _cases_c(arguments, format);

	va_end(arguments);

	return (ct);
}
