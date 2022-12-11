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

	for (a = '0'; a <= '8'; a++)
{
	b = a + 1;
	for (b; b <= '9'; b++)
{


	putchar(a);
	putchar(b);
	if (a <= '8' && b <= '9')
{
	putchar(',');
	putchar(' ');
}
}
}
	putchar('\n');
	return (0);
}
