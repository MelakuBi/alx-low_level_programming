#include <stdio.h>
/**
 *main - start here
 *Description: print lower case alphabet
 *Return: always success
 */
int main(void)
{
	char alphabet;
	int num;

	for (num = '0'; num <= '9'; num++)
{
	putchar(num);
}
	for (alphabet = 'a'; alphabet <= 'f'; alphabet++)
{
	putchar(alphabet);
}
	putchar('\n');
	return (0);
}
