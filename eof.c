#include<stdio.h>

int main()
{
	int a;
	while(a = (getchar() != '\n'))
		printf ("%d", a);
	printf("%d", a);
}

