#include <stdio.h>

int main()
{
	int n;

	printf("Enter a number: ");
        scanf("%d", &n);

	int i = 0;
	int j = 0;
	char matrix[n][n];

	for(i = 0; i < n; i++)
	{
		for(j = 0; j <= i; j++)
		{
			matrix[i][j] = '*';
			printf("%c ", matrix[i][j]);
		}

		printf("\n");
	}

}
