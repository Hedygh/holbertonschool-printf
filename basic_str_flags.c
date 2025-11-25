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
