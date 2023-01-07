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

	while (*argv)
{
	if ((*argv[argc - 1] >= 48) && (*argv[argc - 1] <= 57))
{

	m = m + atoi(*argv[argc - 1]);
	printf("%i\n", m);
	/*return (main(argc, *argv[argc - 1]));*/
}
	else
{
	printf("Error\n");
	return (1);
}
}
	return (0);
}
