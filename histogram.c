#include<stdio.h>
int main()
{
	int n, c, i;
	int length[20];
	for (i=0; i <= 20; ++i)
                length[i] = 0;
	i = 0;
	while ((c = getchar()) != EOF) {
		if (c == ' ' || c == '\t' || c == '\n')
			i ++;
		else 
			length[i] ++;
	}

	for (i = 0; i < 20; i ++)
	{
		for (int j = 0; j < length[i]; j ++)
		{
			printf("*");
		}
		printf("\n");
	}
}
