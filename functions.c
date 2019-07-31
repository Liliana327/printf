#include "holberton.h"
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
/**
* _cases_num - print a number
*@m: print number
*@a: counter
*Return: (int)
*/
int _cases_num(unsigned int m, int a)
{
	if (m / 10)
		a = _cases_num(m / 10, a);
	_putchar(m % 10 + '0');
	return (a + 1);
}
/**
* _cases_num1 - check cases
* @arguments: arguments given
* Return: characters printed
*/
int _cases_num1(va_list arguments)
{
	int num, c = 0;
	unsigned int n;

	num = va_arg(arguments, int);

	if (num < 0)
	{
		n = num * -1;
		putchar ('-');
		c = _cases_num(n, c);
		c += 1;
	}
	else
	{
		n = num;
		c = _cases_num(n, c);
	}
	return (c);
}
/**
* _cases_num2 - function, from string to rot13 format
*@arguments: list
*Return: counter
*/
int _cases_num2(va_list arguments)
{
	int m, s;
	char n[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char j[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char *ch, *str;

	ch = va_arg(arguments, char *);
	if (ch == NULL)
		return (0);
	str = malloc(1024);
	if (str == NULL)
		return (-1);
	for (m = 0; ch[m] != '\0'; m++)
	{
		for (s = 0; s < 52; s++)
		{
			if (ch[m] == n[s])
			{
				str[m] = j[s];
				break;
			}
			else
			{
				str[m] = ch[m];
			}
		}
	}
	for (m = 0; str[m] != '\0'; m++)
	{
		_putchar(str[m]);
	}
	free(str);
	return (m);
}
