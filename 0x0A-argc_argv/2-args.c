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
	while (argc--)
	printf("%s\n", argv[argc]);
	return (0);
}
