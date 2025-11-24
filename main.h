#ifndef MAIN_H
#define MAIN_H
int _printf(const char *format, ...);
int _putchar(char c);
int _puts(char *str, int asc);


typedef struct flag_ptf
{
	char *s;
	int (*f)(va_list);
} f_ptf;
#endif
