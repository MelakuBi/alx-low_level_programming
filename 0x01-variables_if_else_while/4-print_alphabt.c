#include <stdio.h>

/**
 *main - start here
 *Description: print lower case alphabet
 *Return: always success
 */
int main(void)
{
	char alphabet;

	for (alphabet = "a"; alphabet <= "d"; alphabet++)
	putchar(alphabet);
	/*if (alphabetd == "e" || alphabet == "q")*/
	for (alphabet = "f"; alphabet <= "p"; alphabet++)
	putchar(alphabet);
	for (alphabet = "r"; alphabet <= "z"; alphabet++)
	putchar(alphabet);
	putchar('\n');
	return (0);
}
