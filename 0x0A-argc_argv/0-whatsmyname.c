#include <stdio.h>
#include <stdlib.h>
/**
 *  * main - program that prints its name.
 *   * @argc : number of arguments.
 *    * @argv : array that contains the arguments.
 *     * Return: 0.
 */
	int main(int args, char *argv[])
{
	printf("Myname is &s\n", argv[0]);
	(void)argc;
	return (0);
}
