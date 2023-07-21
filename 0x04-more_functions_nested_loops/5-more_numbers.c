#include "main.h"

/**
 * more_numbers - print more numbers
 */

void more_numbers(void)
{
	int num, lin, count;

	for (lin = 1; lin <= 10; lin++)
	{
		for (count = 0; count <= 14; count++)
		{
			num = count;
			if (count > 9)
			{
				_putchar(1 + 48);
				num = count % 10;
			}
			_putchar(num + 48);
		}
		_putchar('\n');
	}
}
