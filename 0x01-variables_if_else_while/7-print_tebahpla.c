#include <stdio.h>
/**
 *main - start here
 *Description: print lower case alphabet
 *Return: always success
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'z'; alphabet  >= 'a'; alphabet--)
{
	putchar(alphabet);
}
	putchar("\n");
	turn (0);
}
