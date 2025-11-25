#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len;
	int len2;
	
	/* simple string with no flag */
	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");
	printf("%d\n", len);
	printf("%d\n", len2);

	/* flag %c */
	len = _printf("hello, %c, %c, salut\n", 'o', 'a');
	len2 = printf("hello, %c, %c, salut\n", 'o', 'a');

	printf("%d\n", len);
	printf("%d\n", len2);
	return 0;
}
