#include "main.h"
/**
 * print_array - aray
 * @a: first var
 * @b: second bar
 */
	void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n - 1); i++)
	prinf("%d, ", a[i])
	if (i == (n - 1))
	printf("%d", a[n - 1]);
	printf("\n");
}
