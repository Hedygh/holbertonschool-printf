#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <unistd.h>
int _printf(const char *format, ...);
int _putchar(char c);
int _puts(char *str/*, int asc*/);
int print_single_char(va_list ap);

typedef struct flag_ptf
{
	char *s;
	int (*f)(va_list);
} f_ptf;
#endif
