#include <stdio.h>

int main()
{
	int matrix[3][3] = { {1,2,9},
		             {4,15,6},
		             {25,8,9} };

	int i = 0;
	int j = 2;
	int sum = 0;
	
	while(i <= 2 && j >= 0)
	{
		sum += matrix[i][j];
		++i;
		--j;
	}

	printf("%i\n", sum);
}
