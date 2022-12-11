#include <stdio.h>
/**
 *main - program starts here
 *Description: this program description
 *putchar: to accept characters
 *Return: always return success
 */
int main(void)
{
	int a;
	int b;
	int c;

	for (a = '0'; a <= '7'; a++)
{
	b = a + 1;
	for (b = b; b <= '8'; b++)
{
	c = b + 1;
	for (c = b; c <= '9'; c++)
	putchar(a);
	putchar(b);
	putchar(c);
	if (a <= '6' && b <= '8' && c <= '9')
{
	putchar(',');
	putchar(' ');
}
}
}
	putchar('\n');
	return (0);
}
