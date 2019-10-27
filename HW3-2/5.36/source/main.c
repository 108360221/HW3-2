#include<stdio.h>
#include<stdlib.h>

void hanoi(int n, char A, char B, char C);

int main(void) {
	int n;

	printf("Enter the height of Towers of Hanoi¡G");
	scanf_s("%d", &n);

	hanoi(n, 'A', 'B', 'C');

	system("pause");
	return 0;
}

void hanoi(int n, char A, char B, char C) {
	if (n == 1)
		printf("%c to %c %c %d\n", A, C,B,n);
	else {
		hanoi(n-1, A, C, B);
		printf("%c to %c %c %d\n", A, C,B,n);
		hanoi(n-1, B, A, C);
	}
}
