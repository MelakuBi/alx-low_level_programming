#include "main.h"
/**
 * print_most_numbers - to print numbers
 * Return: return 0 on success
 */
	void print_most_numbers(void)
{
	int i;

	for (i = 0 ; i <= 9; i++)
	{
	if (i == 2 || i == 4)
	break;
	else
	_putchar(i + '0');
	}
	_putchar('\n');
}
