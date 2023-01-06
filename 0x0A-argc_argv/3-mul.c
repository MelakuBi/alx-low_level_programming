#include <stdio.h>
#include "main.h"
/**
 * main - program that prints its name.
 * @argc : number of arguments.
 * @argv : array that contains the arguments.
 * Return: on success 0
 */
	int main(int argc, char *argv[])
{
	int m = 0;

	if (argc == 3)
{
	m = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", m);
	return (0);
}
	else
{
	printf("Error\n");
}
	return (1);
}
