#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*main - starting of the program and also functions embaded here*/
/*Rturn: the value*/
/*______ this is the main function to print negative_______*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int check = 0;

if (n > check)
	printf(n, "is Positive\n");
if (n == check)
	printf(n, "is zero\n");
else
	printf(n, "is negative\n");
	return (0);
}
