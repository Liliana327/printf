#include <stdarg.h>
#include <stdio.h>
#include "holberton.h"

/**
 * print_all - function that prints anything
 * @format: the format to be printed
 * Return: (0)
 */
void print_all(const char * const format, ...)
{
	va_list arguments;
	int m = 0;
	char *a;

	va_start(arguments, format);
	while (format && format[m])
	{
		switch (format[m++])
		{
	case 'c':
	printf("%c", va_arg(arguments, int));
		break;
	case 'i':
	printf("%i", va_arg(arguments, int));
		break;
	case 'f':
	printf("%f", va_arg(arguments, double));
		break;
	case 's':
	a = va_arg(arguments, char*);
	if (a == NULL)
		a = "(nil)";
		printf("%s", a);
		break;
		default:
		continue;
		}
	if (format[m])
		printf(", ");
	}
	putchar('\n');
	va_end(arguments);
}
