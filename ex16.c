#include <stdio.h>

int main()
{
	int arr[] = {5, -10, 0, 45, -26};
	int i = 0;
	int temp_min = arr[0];
	int j = 0;
	int k;
	int index = 0;

        for(j = 0; j < 4; j++)
	{
		temp_min = arr[j];
		index = j;

		for(i = j + 1; i <= 4; i++)
		{
			if(arr[i] < temp_min)
			{
				temp_min = arr[i];
				index = i;
			}
		}
		k = temp_min;
		arr[index] = arr[j];
		arr[j] = k;
	}

	for(i = 0; i < 5; i++)
	{
		printf("%d\n", arr[i]);
	}
}


