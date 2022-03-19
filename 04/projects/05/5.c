#include <stdio.h>

int main(void)
{
	int n;
	printf("Enter UPC: ");
	scanf("%11d", &n);
	int first_sum = (n % 10) +
					((n % 1000) / 100) +
					((n % 100000) / 10000) +
					((n % 10000000) / 1000000) +
					((n % 1000000000) / 100000000) +
					((n % 100000000000) / 10000000000);

	int second_sum =
		((n % 100) / 10) +
		((n % 10000) / 1000) +
		((n % 1000000) / 100000) +
		((n % 100000000) / 10000000) +
		((n % 10000000000) / 1000000000);

	int total = 3 * first_sum + second_sum;

	printf("Check digit: %d\n", 9 - (total - 1) % 10);

	return 0;
}
