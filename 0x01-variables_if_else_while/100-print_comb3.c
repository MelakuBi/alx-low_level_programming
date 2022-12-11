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
	for (b = '1'; b <= '9'; b++)
{
	if (b <= '9')
{
	putchar(a);
	putchar(b);
	putchar(',');
	putchar(' ');
}
}
}
	putchar('\n');
	return (0);
}
