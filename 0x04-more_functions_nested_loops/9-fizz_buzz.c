#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - start here
 * 3 multiples print Buzz
 * 5 simula
 * 5 & 3 mult
 * Return: zero for success
 */
	int main(void)
{
	int i;
	char a[] = "Fizz";
	char b[] = "Buzz";
	char c[] = "FizzBuzz";

	for (i = 1; i <= 100; i++)
	{

	if (i == 100)
	{
	printf("%s", b);
	printf(" ");
	}
	else if ((i % 3 == 0) && (i % 5 == 0))
	{
	printf("%s", c);
	printf(" ");
	}
	else if (i % 3 == 0)
	{
	printf("%s", a);
	printf(" ");
	}
	else if (i % 5 == 0)
	{
	printf("%s", b);
	printf(" ");
	}
	else
	{
	printf("%d", i);
	printf(" ");
	}
}
	printf("\n");
	return (0);
}
