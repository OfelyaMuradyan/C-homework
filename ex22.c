#include <stdio.h>

int main()
{
	char arr1[17] = "Hello,";
	char arr2[] = "world";
	int i = 0;
	size_t temp1 = sizeof(arr1);
	size_t temp2 = sizeof(arr2);
	char* ptr1 = arr1;

	*(ptr1 + temp1 - 1) = ' ';
	for(i = temp1; i < temp1 + temp2; i++)
	{
		*(ptr1 + i) = arr2[i - temp1]; 
	}

	for(i = 0; i < temp1 + temp2; i++)
	{
		printf("%c", arr1[i]);
	}
	printf("\n");
}
