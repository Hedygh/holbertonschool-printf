#include "main.h"

int print_di_nbr(va_list ap)
{
	return (print_nbr(va_arg(ap, int)));
}

int print_u_nbr(va_list ap)
{
	return (print_unsigned_nbr(va_arg(ap, unsigned int)));
}

int print_b_nbr(va_list ap)
{
	int sum = 0;
	unsigned int n = va_arg(ap, unsigned int);
	char *s;

	if (n == 0)
		return (_puts("0") + 1);
	s = convert_base(n, 2, 0);
	if (!s)
		return (0);
	sum += _puts(s);
	return (sum);
}
