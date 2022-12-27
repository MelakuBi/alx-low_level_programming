#include "main.h"
#include <stdio.h>
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
	printf(", ");
	}
	printf("%d", a[j]);
	}
	printf("\n");
}
