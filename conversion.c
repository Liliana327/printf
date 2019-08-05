#include "holberton.h"
#include <unistd.h>
/**
 *conversion - print converted unsigned int with specified base
 *@num:unsigned int input
 *@f: format
 *Return: counter
 */
int conversion(unsigned int num, char f)
{
	const char R1[] = "0123456789ABCDEF";
	const char R2[] = "0123456789abcdef";
	char aux[16]; /* maximum of characters given by hexadecimal number */
	int ct = 0; /* amount of arguments printed*/
	int i, j, base;

	if (f == 'b')
		base = 2;
	if (f == 'u')
		base = 10;
	if (f == 'o')
		base = 8;
	if (f == 'x' || f == 'X')
		base = 16;

	if (num == 0)
		return (ct = _putchar(R1[0]));

	for (i = 0; num > 0; i++)
	{
		if (f == 'x')
			aux[i] = R2[num % base];
		else
			aux[i] = R1[num % base];
		num /= base;
	}


	for (j = i - 1; j >= 0 ; j--)
	{
		ct = ct + _putchar(aux[j]);
	}
	return (ct);
}
