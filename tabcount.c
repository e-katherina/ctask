#include<stdio.h>
int main()
{
	int n, c;
	n = 0;
	while ((c = getchar()) != EOF)
		if (c == '	')
		   ++n;
	printf ("%d\n", n);
}
