#include <stdio.h>

int main()
{
	int num = 0;
        int i;

	printf("Enter a number: ");
	scanf("%d",&num);

	if(num == 1)
		printf("%d is neither prime, nor composite.\n", num);
	
	else if(num == 2)
		printf("%d is a composite number.\n", num);
	
	else if(num > 2)
	        {	
		        for(i = 2; i * i <= num; i++)
                        {
		                if(num % i == 0)
		                {
		                        printf("%d is a composite number.\n", num);
		    	                return 0;
		                }
			}
		        
			printf("%d is a prime number.\n", num);
		}
	
	else 
		printf("Number is invalid.");

	return 0;
}
