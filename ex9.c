#include <stdio.h>

int main()
{
	int num = 0;

	printf("Enter a number: ");
	scanf("%d", &num);

        int a = 1 << 4;

	printf("%d\n", num | a);
}
