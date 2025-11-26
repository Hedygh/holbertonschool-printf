#include "main.h"

int print_di_nbr(va_list ap)
{
	return (print_nbr(va_arg(ap, int)));
}

int print_u_nbr(va_list ap)
{
	return (print_unsigned_nbr(va_arg(ap, unsigned int)));
}
