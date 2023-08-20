#include <stdio.h>

int main()
{
	int arr[7];
	int i = 0;
	int sum = 0;

	for(i = 0; i < 7; i++)
	{
		printf("Enter a number: ");
		scanf("%i", &arr[i]);
		sum += arr[i];
	}

	printf("Sum of array numbers is %d\n", sum);
}
