#include "holberton.h"
/**
* _str_ptf - print char string
* @a: array pointer
* Return: ()
*/
int _str_ptf(char *a)
{
	int m;

	for (m = 0; a[m] != '\0'; m++)
	{
		_putchar(a[m]);
	}
	return (0);
}
