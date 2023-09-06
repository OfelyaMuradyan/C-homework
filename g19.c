#include <stdio.h>

int main()
{
	int arr1[] = {1,2,3,4,5,6};
	size_t k = sizeof(arr1) / sizeof(arr1[0]);
	int arr2[k];
	int i = 0;

	for(i = 0;i < k; i++)
	{
		arr2[i] = arr1[i];
	}

	for(i = 0; i < k; i++)
	{
		printf("%d\n", arr2[i]);
	}
}
