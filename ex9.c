#include <stdio.h>

int main()
{
	int num = 0;

	printf("Enter a number: ");
	scanf("%d", &num);

	int a = num & 16;
	if (a != 16)
	{
		num += 16;
	}	
	printf("%d\n", num);
}
