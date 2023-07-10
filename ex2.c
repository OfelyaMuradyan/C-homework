#include <stdio.h>

int main()
{
	int num1 = 0;
	int num2 = 0;

	printf("Enter first number: ");
	scanf("%d", &num1);
	printf("Enter second number: ");
	scanf("%d", &num2);

	if (num1 > num2){
		printf("%d is bigger than %d.\n", num1, num2);
	} else if (num1 == num2) {
		printf("%d is equal to %d.\n", num1, num2);
	} else	{ 
		printf("%d is bigger than %d.\n", num2, num1);
	}
}
