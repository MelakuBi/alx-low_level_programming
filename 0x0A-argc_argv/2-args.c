#include <stdio.h>
#include "main.h"
/**
 * main - program that prints all arguments
 * @argc : number of arguments.
 * @argv : array that contains the arguments.
 * Return: on success 0
 */
	int main(int argc, char *argv[])
{
	while (*argv)
	{
	(void) argc;
	printf("%s\n", *argv);
	argv++;
	}
	return (0);
}
