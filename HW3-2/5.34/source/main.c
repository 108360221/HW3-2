#include <stdio.h>
#include <stdlib.h>

float power(float, int);

void main(void) {

	int exponent;
	float base, Ans;

	printf("Enter base and exponent : ");
	scanf_s("%f%d", &base, &exponent);

	Ans = power(base, exponent);

	printf("The %f power of %d is %f\n", base, exponent, Ans);

	system("pause");
}

float power(float X, int E) {

	int i;
	float powerXn = 1;

	for (i = 1; i <= E; i++)
		powerXn = powerXn * X;

	return powerXn;
}
