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
        char aux[300];
        char *ptr;
        int ct = 0; /* amount of arguments printed*/
        int i, base;

        if (f == 'u')
                base = 10;
        if (f == 'o')
                base = 8;
        if (f == 'x' || f == 'X')
                base = 16;

        ptr = &aux[300];
        *ptr = '\0';

        while(num != 0)
        {
                if (f == 'x')
                        *--ptr = R2[num % base];
                else
                        *--ptr = R1[num % base];
                num /= base;
        }


        for (i = 0; ptr[i] != '\0'; i++)
                ;

        ct = i;
        write(1, ptr, ct);
        return (ct);
}
