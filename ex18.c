#include <stdio.h>

int main()
{
	int x = 8;
	int y = 9;
	int* ptrx = &x;
	int* ptry = &y;

	printf("%d\n", *ptrx - *ptry);
	printf("%d\n", *ptrx + *ptry);
}
