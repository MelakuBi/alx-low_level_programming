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
	printf("%s\n", argc - 1);
	(void) argv;
	return (0);
}
