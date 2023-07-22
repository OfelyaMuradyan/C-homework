#include <stdio.h>

int main()
{
	char arr[5];
        int i = 0;

	for(i = 0;i <= 4;i++){
	       	printf("Enter a character for arr[%i]: ", i);
		scanf(" %c", &arr[i]);
	}

	for(i = 4;i >= 0; i--)
	{
		printf("%c ",arr[i]);
	}
	
}
