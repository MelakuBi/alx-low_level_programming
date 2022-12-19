#include "main.h"
/**
 * swap_int - swap the value of two variables
 * @a: the first pinter variable
 * @b: the second pinter variable
 */
	void swap_int(int *a, int *b)
{
	int j;

	 j = *a;
	*a = *b;
	*b = j;
}
