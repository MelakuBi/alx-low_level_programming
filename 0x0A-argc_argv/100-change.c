#include <stdio.h>
#include "main.h"
#include <limits.h>
#include <stdlib.h>
/**
 *main - program that adds positive numbers
 * @argv : array that contains the arguments
 * @argc : counts number of passed arguments
 * Return: on success 0
 */
	int main(int argc, char *argv[])
{
	int val, i, no;
	int count;

	for (i = 1; i < argc; i++)
	{
	count++;
	val = atoi(argv[i]);
	}
	if (count == 0 || count > 1)
{
	printf("Error\n");
}
	else if (val < 48)
	{
	return (0);
	printf("\n");
	}
	else
	no = printf("%d\n", 3);
	return (no);
}
