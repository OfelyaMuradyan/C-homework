#include <stdio.h>

int main()
{
	int n;
	printf("Enter a number: ");
	scanf("%d", &n);
	int i = 0;
	int j = 0;
      	char matrix[n][n];

	for(i = 0; i <= n-1; i++)
	{
		if(i >= 1 && i <= n-2)
		{
			for(j = 1; j <= n-2; j++)
		        {
				matrix[i][j] = ' ';
		        }

			matrix[i][0] = '*';
			matrix[i][n-1] = '*';
	        } else
		{
			for(j = 0; j <= n-1; j++)
			{
				matrix[i][j] = '*';
			}
		}	
	}
	for(i = 0;i <= n-1; i++)
	{
		for(j = 0;j <= n-1; j++)
		{
			printf("%c ", matrix[i][j]);
		}
		printf("\n");
	}
}
