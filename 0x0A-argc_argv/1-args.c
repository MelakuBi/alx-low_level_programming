#include <stdio.h>
#include "main.h"
/**
 * main - program that prints its name.
 * @argc : number of arguments.
 * @argv : array that contains the arguments.
 * Return: 0.
 */
	int main(int argc, char *argv[])
{
	(void) argv;
	printf("%s\n", argc - 1);
	return (0);
}
