#include "holberton.h"
#include <stdarg.h>
#include <unistd.h>
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
