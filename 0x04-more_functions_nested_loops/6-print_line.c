#include <stdio.h>
#include "main.h"

/**
 * print_line - prints a straight line
 * @n: parameter
 * Return: returns nothing
 */

void print_ine(int n)
{
	while (n-- > 0)
	{
		putchar('_');
	}
	putchar('\n');
}
