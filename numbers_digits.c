#include "main.h"

int print_nbr(int n)
{
	unsigned int x;
	int sum = 0;

	x = n;
	if (n < 0)
	{
		sum += _putchar('-');
		x = -n;
	}
	if (x >= 10)
		sum += print_nbr(x / 10);
	_putchar(x % 10 + '0');
	sum++;
	return (sum);
}

int print_unsigned_nbr(unsigned int n)
{
	unsigned int x = n;
	int sum = 0;

	if (x >= 10)
		sum += print_unsigned_nbr(x / 10 );
	_putchar(x % 10 + '0');
	sum++;
	return (sum);
}
