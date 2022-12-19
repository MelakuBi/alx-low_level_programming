#include "main.h"
/**
 *puts_half - to out half
 *@str: variable pointer
 */
	void puts_half(char *str)
{
	int l, m, n;

	n = 0;

	for (l = 0; str[l] != '\0'; l++)
	n++;

	m = ( n/ 2);

	if ((n % 2) == 1)
		m = ((n + 1) / 2);
	for (l = m; str[l] != '\0'; l++)
	_putchar (str[l]);
	_putchar ('\n');
}
