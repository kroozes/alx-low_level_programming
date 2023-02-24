#include "main.h"
/**
 * print_square - print a square
 * @size: integer
 *
 * Return: hash square
 */
void print_square(int size)
{
	int row, col;
	{
	if (size < 0)
	{
	_putchar('\n');
	}
	else
	{
	for (row = 0; row < size; row++)
	{
	for (col = 0; col < size; col++)
	{
	_putchar(35);
	}
	}
	_putchar('\n');
	}
	}
}
