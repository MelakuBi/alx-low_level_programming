#include "main.h"
/**
 * reverse_array - function to reverse array contents
 * @a: pointer to variable
 * @n: number of tobe reverse
 */
	void reverse_array(int *a, int n)
{
	int i = 0, j;

	while (i < n)
	i++;
	
	for (j = i; j >= 0; j--)
	{
	if (j != i)
	{
	_putchar(',');
	_putchar(' ';
	}
	_putchar(a[j]);
	}
	_putchar('\n');
}
