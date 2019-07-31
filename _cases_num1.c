#include "holberton.h"
#include <stdarg.h>
#include <unistd.h>
/**
* _cases_num1 - print a number
*@m: print number
*@a: counter
*Return: (int)
*/
int _cases_num1(unsigned int m, int a)
{
	if (m / 10)
		a = _cases_num1(m / 10, a);
	_putchar(m % 10 + '0');
	return (a + 1);
}

