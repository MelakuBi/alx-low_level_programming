#include "main.h"
/**
 * print_alphabet_x10 - this is main function
 */
	void print_alphabet_x10(void)
{
	int num;
	char abc;

	for (num = 0; num <= 9; num++)
{
	for (abc = 'a'; abc <= 'z'; abc++)
{
	_putchar(abc);
	_putchar('\n');
}
}
}
