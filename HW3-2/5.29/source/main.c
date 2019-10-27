#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i, num1, num2, lcm, gcd = 0;

	printf("Enter two numbers : ");
	scanf_s("%d%d", &num1, &num2);

	for (i = num1 * num2; i >= 1; i--) {
		if (num1 % i == 0 && num2 % i == 0) {
			gcd = i;
			break;
		}
	}

	lcm = num1 * num2 / gcd;

	printf("The least common multiple of %d and %d is %d\n ", num1, num2, lcm);

	system("pause");
	return 0;
}