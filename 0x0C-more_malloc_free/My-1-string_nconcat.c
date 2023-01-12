#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - a function that returns pointer to newly allocated memory
 * @s1 : the first string
 * @s2 : the second string
 * @n: limit of pointer return
 * @Return : Return pointer character
 */
	char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *pointer;
	int i, j;
	int count1, count2, sum;

	while (s1)
	count1++;
	while (s2)
	count2++;
	sum = count1 + count2;
	pointer = malloc((sizeof(pointer) * sum) + 1);
	for (i = 0; i  <= count1; i++)
	pointer[i] = s1[i];
	for (j = 0 ; j <= count2; j++)
	{
	i++;
	pointer[i] = s2[j];
	}
	for (i = 0 ; i <= count1; i++
	printf("%s", pointer[i]);
	if (n >= count2)
	for (int j = i; j <= count2; j++)
	return (printf("%s", pointer[j]));
	else if (n <= count2)
	for (int j = i; j <= n; j++)
	return (printf("%s", pointer[j]));
	return (printf("%c", \0));
	if (pointer == NULL)
	return (NULL);
}
