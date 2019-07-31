#include "holberton.h"
#include <stdarg.h>
#include <unistd.h>

/**
* _cases_lis - check cases
* @arguments: arguments given
* Return: characters printed
*/
int _cases_lis(va_list arguments)
{
	char *m;
	int a;

	m = va_arg(arguments, char *);

	if (m == NULL)
		m = "(null)";

	for (a = 0; m[a] != '\0'; a++)
	{
		_putchar(m[a]);
	}
	return (a);
}
