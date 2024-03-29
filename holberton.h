#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int _putchar(char c);
int _printf(const char *format, ...);
int _cases_c(va_list arguments, const char *format);
int _cases_lis(va_list arguments);
int _cases_num(va_list arguments);
int _cases_num_bin(va_list arguments);
int conversion(unsigned int num, const char);

#endif /** _HOLBERTON_H_ */
