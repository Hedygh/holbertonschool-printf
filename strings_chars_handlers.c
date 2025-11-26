#include "main.h"

/**
 *
 *
 *
 */

int print_single_char(va_list ap)
{
	char c = (char)va_arg(ap, int);
	_putchar(c);
	return (1);
}

int print_s_string(va_list ap)
{
	char *str = va_arg(ap, char *);
	
	if (!str)
		return (_puts("(null)"));
	return (_puts(str));
}
