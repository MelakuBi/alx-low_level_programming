#include <stdlib.h>
#include <time.h>
/*main - starting of the program and also functions embaded here*/
/*Rturn: the value*/
/*______ this is the main function to print negative_______*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
if (n > 0)
	printf(":is Positive\n");
if (n == 0)
	printf(":is zero\n");
else
	printf(":is negative\n");
	return (0);
}
