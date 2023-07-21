#include "main.h"

/**
 * print_square - prints a square, followed by a new line;
 * @size: size of the square
 */

void print_square(int size)
{
	int row, colon;

	for (row = 1; row <= size; row++)
	{
		for (colon = 1; colon <= size; colon++)
			_putchar('#');
		_putchar('\n');
	}
}
