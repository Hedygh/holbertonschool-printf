#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <unistd.h>
int _printf(const char *format, ...);
	/* Chars and strings */
// printing
int _putchar(char c);
int _puts(char *str/*, int asc*/);
//handling va_arg
int print_single_char(va_list ap);



	/* numbers and digits */
// printing
int print_nbr(int n);
int print_unsigned_nbr(unsigned int n);
// handling va_arg
int print_di_nbr(va_list ap);
int print_u_nbr(va_list ap);

typedef struct flag_ptf
{
	char *s;
	int (*f)(va_list);
} f_ptf;
#endif
