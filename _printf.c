#include "main.h"

/* get_flag takes s as argument, and return a function that takes va_list as argument */
int (*get_flag(const char *s))(va_list)
{
	f_ptf flag[] = {
		{"c", print_single_char},
		{"s", print_s_string},
		/*{"%",     	 },*/
		{"d", print_di_nbr},
		{"i", print_di_nbr},
		{"u", print_u_nbr},
		{NULL, NULL}
	};
	int i = 0;

	while (flag[i].s != NULL)
	{
		if (flag[i].s[0] == *s)
			return (flag[i].f);
		i++;
	}
	return (NULL);
}	
int _printf(const char *format, ...)
{
	va_list ap;
	int sum = 0, i = 0;
	int (*f)(va_list);

	if ((!format) || (format[i] == '%' && format[i + 1] == '\0'))
		return (-1);

	va_start(ap, format);

	while (format[i])
	{
		/* CAS OU ON TROUVE % */
		if (format[i] == '%')
		{
			f = NULL;
			if (format[i + 1] != '\0')
				f = get_flag(&format[i + 1]); // ici on avance pas
			if (f == NULL)
			{
				_putchar(format[i]);
				sum++;
				i++;
			}
			else
			{
				sum += f(ap);
				i += 2; // ici on avance de 2 pour passer %c
			}
		}
		/* CAS OU ON ECRIS NORMALEMENt */
		else
		{
			_putchar(format[i]);
			sum++;
			i++;
		}
	}
	va_end(ap);
	return (sum);
}
