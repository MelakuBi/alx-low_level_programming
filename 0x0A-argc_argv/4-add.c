#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * main - program that adds positive numbers
 * @argc : number of arguments.
 * @argv : array that contains the arguments.
 * Return: on success 0
 */
	int main(int argc, char *argv[])
{
	int m = 0;
	int val = 0;
	int count = 1;

	while (count < argc)
{
	val = atoi(argv[count]);
	if (_isdigit(val))
	{
/*	val = atoi(argv[count]);*/
	m = m + val;
	}
	else if (!(_isdigit(*argv[count])))
	{
	return (0);
	}
	else
	{
	printf("Error\n");
	return (1);
	}
	count++;
}
	printf("%d\n", m);
	return (0);
}
