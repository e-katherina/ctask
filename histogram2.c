#include<stdio.h>
int main()
{
	int n, c, i;
	int length[128];
	for (i=0; i <= 128; ++i)
                length[i] = 0;
	i = 0;

	while ((c = getchar()) != EOF) {
		length[c] ++;
	}

	for (i = 0; i < 128; i ++)
	{
		printf("%c ", i);
		for (int j = 0; j < length[i]; j ++)
		{
			printf("*");
		}
		printf("\n");
	}
}
