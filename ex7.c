#include <stdio.h>

int main()
{
        int year = 0;

	printf("Enter a year: ");
	scanf("%d", &year);

	if (year % 4 == 0)
	{
		printf("%d is a leap year.\n", year);
	}
       	else 
	{
		printf("%d isn't a leap year.\n", year);
	}
}
