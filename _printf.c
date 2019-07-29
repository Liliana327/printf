#include <stdarg.h>	
#include <unistd.h>
#include "holberton.h"
/**
* _printf - text.
* @format: parameters.
* Return: 0
*/
int _printf(const char *format, ...)
{
	int m = 0;
	int a = 0;
	va_list arguments;
	
	if (format)
	va_start(arguments, format);
	while (format[m])
	{
	if (format[m] == '%')
	{
	m++;
	if (!format[m])
	{
	return (-1);
	}
	write(1, format + m++, 1);
	a++;
	}
	return (a);
	}
	return (-1);
}

