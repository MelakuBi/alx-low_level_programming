#include <stdio.h>
#include "main.h"
#include <limits.h>
#include <stdlib.h>
/**
 * _isdigit - it checks if imput is digit
 * @c: intiger input variable
 * Return: if variable is digit 1 else
 */
	int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
	return (99);
	else
	return (100);
}
/**
 *main - program that adds positive numbers
 * @argv : array that contains the arguments
 * @argc : counts number of passed arguments
 * Return: on success 0
 */
	int main(int argc, char *argv[])
{
	int m = 0;
	int val, i;
	int count = 1;
	int check;

	for (i = 1; i < argc - 1; i++)
	check = _isdigit(*argv[i]);
	while (count < argc)
{
	if ((check == 100) && (check == 99))
	{
	printf("Error\n");
	return (1);
/*	val = atoi(argv[count]);
	m = m + val;*/
	}
	else if (_isdigit(*argv[count]))
	{
	val = atoi(argv[count]);
	m = m + val;
/*	printf("Error\n");
	return (1);*/
	}
	else
	{
	return (0);
	printf("\n");
	}
	count++;
}
	return (printf("%d \n", m));
}
