#include "holberton.h"

/**
 * print_square - check the code for Holberton School students.
 * @size: command
 * variable for the numbers.
 * Return: Always 0.
 */

void print_square(int size)
{
	int ach;
	int lag;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (lag = 1; lag <= size; lag++)
		{
			for (ach = 1; ach <= size; ach++)

			_putchar('#');
			_putchar('\n');
		}
	}
}
