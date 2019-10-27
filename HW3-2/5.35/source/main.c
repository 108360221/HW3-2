#include <stdio.h>
#include <stdlib.h>

unsigned long long int Fibonacci(unsigned int n);

int main() {

	int IP;

	printf("Enter a number :");
	scanf_s("%d", &IP);

	for (int i = 0; i < IP; i++)
		printf("%llu ", Fibonacci(i));

	system("pause");
	return 0;
}

unsigned long long int Fibonacci(unsigned int n) {

	if (n == 0)
		return 0;
	else if (n == 1)
		return 1;
	else
		return (Fibonacci(n - 1) + Fibonacci(n - 2));
}