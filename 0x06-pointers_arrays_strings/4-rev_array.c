#include "main.h"
#include <stdio.h>
/**
 * reverse_array - function to reverse array contents
 * @a: pointer to variable
 * @n: number of tobe reverse
 */
	void reverse_array(int *a, int n)
{
	int i = 0, j, m;

	while (i < n)
	i++;
	for (j = i; j < n; j++)
	{
	if (j != 0)
	{
	printf(", ");
	}
	m = a[j];
	a[j] = a[i];
	a[i] = m;
	i--;
	printf("%d", a[i]);
	}
}
