#include <stdio.h>

int main()
{
	char arr[] = "Hello, world";
	char ch;
	int i = 0;
	int temp = 0;

	printf("Enter a character from string: ");
	scanf("%c", &ch);

	for(i = 0; i < sizeof(arr) - 1; i++)
	{
		if(arr[i] == ch)
		{
			temp = i;
			break;
		}
	}

	if (temp == 0)
	{
		for(i = 0; i < sizeof(arr) - 1; i++)
		{
			printf("%c", arr[i]);
		}
	}	

	else
	{
		for(i = temp + 1; i < sizeof(arr) - 1; i++)
		{
			printf("%c", arr[i]);
		}
	}
	printf("\n");
}
