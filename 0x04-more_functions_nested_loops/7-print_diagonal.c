#include "main.h"
/**
 * print_diagonal - print a diagonal line
 * @n: integer
 * Return: a diagonal line
 */
void print_diagonal(int n)
{
	int x;

	if (n > 0)
	{
	for (x = 1; x <= n; x++)
	{
	_putchar(92);
	}
	}
	_putchar('\n');
}
