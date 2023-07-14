#include <stdio.h>

int main()
{
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;

	printf("Enter first number: ");
	scanf("%d", &num1);
	printf("Enter second number: ");
	scanf("%d", &num2);
	printf("Enter third number: ");
	scanf("%d", &num3);

	if (num1 == 0 || num2 == 0 || num3 ==0)
	{
		printf("0\n");
		return 0;
	}

	while (num1 != num2)
	{
		if (num1 < num2)
		{
			num2 -= num1;
		}
		else 
		{
			num1 -= num2;
		}
	}

	while (num1 != num3)
	{
		if (num1 < num3)
		{
			num3 -= num1;
		}
		else 
		{
			num1 -= num3;
		}
	}
	printf("The most common divisor is %d.\n", num1);
}
