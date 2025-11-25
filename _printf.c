#include "main.h"

int get_flag(va_list)
{
	f_ptf flag[] = {
		{"c", },
		{"s", },
		{"%", },
		{"d", },
		{"i", }
	};
}	
int _printf(const char *format, ...)
{
	va_list ap;
	int sum = 0, i = 0;
	int (*f)(va_list);

	va_start(ap, format);

	while (format[i])
	{
		//if (format[i] == '%' && format[i + 1] != '\0')
		sum += _putchar(format[i]);
		i++;
	}
	return (sum);
}
