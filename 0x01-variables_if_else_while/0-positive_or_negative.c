#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
		pintf("%d positive \n", n);
	}
	if (n == 0)
	{
		printf("%d zero \n", n);
	}
	if (n < 0)
	{
		printf("%d negative \n", n);
	}
	return (0);
}