#include "main.h"
#include<unistd.h>

/**
 * _putchar - Uses write to print a char c
 * @c: char to print
 * Return: 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _puts - Uses a loop _putchar to print a string
 * @str: string to print
 * Return: sum of chars printed
 */
int _puts(char *str, int asc)
{
	int i = 0;
	int sum = 0;
	
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
		sum++;
	}
	return (sum);
}
