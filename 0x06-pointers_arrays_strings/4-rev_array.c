#include "main.h"
/**
 * reverse_array - function to reverse array contents
 * @a: pointer to variable
 * @n: number of tobe reverse
 */
	void reverse_array(int *a, int n)
{
	int i = 0, j = 0, m;

	while (a[i] != '\0')
	i++;
	for (; j <= n; j++)
	{
	m = a[j];
	a[i] = m;
	i--;
	}
}
