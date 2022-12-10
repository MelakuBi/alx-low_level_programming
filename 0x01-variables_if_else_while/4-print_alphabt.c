#include <stdio.h>
/**
 *main - start here
 *Description: print lower case alphabet
 *Return: always success
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'd'; alphabet++)
{
	if (alphabet != 'e' && alphabet != 'q')
	putchar(alphabet);
}
	putchar('\n');
	return (0);
}
