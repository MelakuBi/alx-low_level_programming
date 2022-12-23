#include "main.h"
/**
 * reverse_array - function to reverse array contents
 * @a: pointer to variable
 * @n: number of tobe reverse
 */
	void reverse_array(int *a, int n)
{
	int i = 0, j, m, l;

	while (a[i] != '\0')
	i++;

	if (n != '\0')
	{
	for (j = 0; j < n; j++)
	{
	m = a[j];
	a[i] = m;
	i--;
	}
	}
	else
	{
	l = i;
	for (j = 0; j <= l; j++)
	{
	m = a[j];
	a[i] = m;
	i--;
	}
	}
}
