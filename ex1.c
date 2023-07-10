#include <stdio.h>

int main()
{
	char letter;

	do {
        	printf("Enter a letter: ");
	        scanf(" %c", &letter);
	} while(!((letter >= 'A' && letter <= 'Z') || (letter >='a' && letter <= 'z')));
	
	if (letter == 'A' || letter == 'a' || letter == 'E' || letter == 'e'|| letter == 'I' || letter == 'i' || letter == 'O' || letter == 'o' || letter == 'U' || letter == 'u')
	{
		printf("'%c' is a vowel letter.\n", letter);
	} else {
		printf("'%c' is a consonant letter.\n", letter);
	}
	
}
