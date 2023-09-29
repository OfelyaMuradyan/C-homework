#include <stdio.h>

int add(int num1, int num2)
{
	int c = num1 + num2;
	return c;
}

int sub(int num1, int num2)
{
	int c = num1 - num2;
	return c;
}

float div(int num1, int num2)
{
	float c = num1 / num2;
	return c;
}

int mul(int num1, int num2)
{
	int c = num1 * num2;
	return c;
}

int main()
{
	int num1;
	int num2;
	char symbol;
	float res = 0;

	printf("Enter two numbers: ");
	scanf("%d %d", &num1, &num2);
	
	printf("Enter a symbol: ");
	scanf(" %c", &symbol);
	
	switch(symbol)
	{
		case '+':
			res = add(num1, num2);
			break;
		case '-':
			res = sub(num1, num2);
			break;
		case '/':
			if (num2 != 0)
			{
				res = div(num1, num2);
				break;
			}
			else
				printf("Number isn't divided by zero\n");
		       		return 0;	
		case '*':
			res = mul(num1, num2);
			break;
		default:
			printf("Calculator can't do that operation\n");
			return 0;
	}
	
	printf("%f\n", res);
}
