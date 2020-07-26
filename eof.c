#include<stdio.h>

int main()
{
	int a;
	while(a = (getchar() != EOF))
		printf ("%d", a);
	printf("%d\n", a);
	// 1.7 exercise
	printf("%d\n", EOF);
}

