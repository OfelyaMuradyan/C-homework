#include <stdio.h>

int main()
{
	char arr[7];
        int i = 0;
	
	for(i = 0;i <= 6;i++)
	{ 
        	printf("Enter a character for arr[%i]: ", i);
		scanf(" %c", &arr[i]);
	}

        for(i = 0;i <= 6;i++)
	{
		if(arr[i] >= 48 && arr[i] <= 57)
			printf("%c ", arr[i]);
	}
}
