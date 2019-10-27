#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char IP = ' ', OP = ' ';
	printf("Enter an alphabet :");
	scanf_s(" %c", &IP);
	if (IP < 91) OP = IP + ('a' - 'A');
		
	else if (IP > 96) OP = IP - ('a' - 'A');
		
	printf(" %c\n", OP);

	system("pause");
	return 0;
}