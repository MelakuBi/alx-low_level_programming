#include "main.h"
/**
 * more_numbers - print numbers 10 times numbers
 * Return: return 0 on success
 */
	void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i <= 9; i++)
	{
	for (j = 0; j <= 14; j++)
	_putchar(j + '0');
	}
	_putchar('\n');
}
