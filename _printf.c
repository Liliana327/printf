#include "holberton.h"
#include <stdarg.h>

/**
* _cases_lis - check cases
* @m: array pointer
* Return: arguments
*/
int _cases_lis(char *m)
{
	if (m != '\0')
	{
		_str_ptf(m);
		return (_strlen(m));
	}
	else
	{
		_str_ptf("(null)");
		return (_strlen("(null)"));
	}
}
/**
 * _printf - function to print strings and int
 * @format: format
 * Return: arguments
*/
int _printf(const char *format, ...)
{
	va_list arguments;

	va_start(arguments, format);
	if (format == '\0')
		return (-1);
	return (case_lst(format, arguments));
}
