#include <stdio.h>

int main()
{
	int arr[7];
        int i = 0;
	for(i = 0;i <= 6;i++)
	{
		printf("Enter a number for arr[%i]: ", i);
		scanf(" %c", &arr[i]);
	}

	i = 0;
	while(i >= 0 && i <= 6)
	{
		printf("%c ", arr[i]);
		++i;
	}
}
