#include <stdio.h>
/**
 *main - start here
 *Description: print lower case alphabet
 *Return: always success
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
	putchar(alphabet);
}
	for (alphabet = 'A'; alphabet <= 'Z'; alphabet++)
{
	putchar(alphabet);
}
	putchar('\n');
	return (0);
}
