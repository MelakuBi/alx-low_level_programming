#include "main.h"
/**
 * reverse_array - function to reverse array contents
 * @a: pointer to variable
 * @n: number of tobe reverse
 */
	void reverse_array(int *a, int n)
{
	int i = 0, j, m;

	while (a[i] != '\0')
	i++;

	for (j = 0; j <= n; j++)
	{
	m = a[j];
	a[j] = a[i];
	a[i] = m;
	i--;
	}
}
