#include "holberton.h"
#include <stdarg.h>
#include <unistd.h>

/**
* _cases_num - check cases
* @arguments: arguments given
* Return: characters printed
*/
int _cases_num(va_list arguments)
{
	int num, c = 0;
	unsigned int n;

	num = va_arg(arguments, int);

	if (num < 0)
	{
		n = num * -1;
		putchar ('-');
		c = _cases_num1(n, c);
		c += 1;
	}
	else
	{
		n = num;
		c = _cases_num1(n, c);
	}
	return (c);
}
