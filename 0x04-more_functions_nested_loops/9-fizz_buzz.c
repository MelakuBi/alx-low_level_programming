#include "main.h"
#include <stdio.h>
/**
 * fizz_buzz - start here
 * 3 multiples print Buzz
 * 5 simula
 * 5 & 3 mult
 * Return: zero for success
 */
	void fizz_buzz(void)
{
	int i;
	char a[] = "Fizz ";
	char b[] = "Buzz ";
	char c[] = "FizzBuzz ";

	for (i = 1; i <= 100; i++)
	{
	if (i == 100)
	printf("%s", b);
	else if ((i % 3 == 0) && (i % 5 == 0))
	printf("%s", c);
	else if (i % 3 == 0)
	printf("%s", a);
	else if (i % 5 == 0)
	printf("%s", b);
	else
	printf("%d", i);
}
	printf("\n");
	return (0);
}
