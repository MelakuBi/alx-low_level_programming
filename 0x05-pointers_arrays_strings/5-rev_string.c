#include "main.h"
/**
 * rev_string - function to reverse string
 * @s:input string
 * Return: reversed string
 */
	void rev_string(char *s)
{
	char set = s[0];
	int count = 0;
	int i;

	while (s[count] != '\0')
	count++;

	for (i = 0; i < count; i++)
{
	count--;
	set = s[i];
	s[i] = s[count];
	s[count] = set;
}
}
