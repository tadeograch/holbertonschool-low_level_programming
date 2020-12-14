#include <stdio.h>
#include <math.h>

int main(void)
{
	long int i, n, num, maxprime;

	num = 612852475143;
	n = num;
	for (i = 3; i <= sqrt(n); i += 2)
	{
		while (num % i == 0)
		{
			maxprime = i;
			num /= i;
		}
	}
	printf("%li", maxprime);
	return (0);
}
