#include "main.h"
/**
 * more_numbers - print numbers 10 times numbers
 * Return: return 0 on success
 */
	void more_numbers(void)
{
	int i;
	int j = 0;

	for (i = 0 ; i <= 9; i++)
	{
	while (j <= 14)
	_putchar(i + '0');
	}
	_putchar('\n');
}
