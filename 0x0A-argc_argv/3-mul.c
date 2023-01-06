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
	while (*argv)
	{
	if (argc == 2)
	return (printf("%i * %i\n", *argv[argc - 1] * (*argv[argc - 2])));
}
