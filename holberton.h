#ifndef _HOLBERTON_H
#define _HOLBERTON_H

#include <stdarg.h>

#include <stdio.h>

#include <stdlib.h>

#include <unistd.h> 

int _cases_num(unsigned int m, int a);
int _cases_num1(va_list arguments);
int _cases_num2(va_list arguments);
int _cases_lis(va_list arguments);
int _printf(const char *format, ...);
int _putchar(char c);
int case_c(va_list arguments, const char *format);
#endif /** _HOLBERTON_H_ */

