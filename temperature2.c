#include<stdio.h>
int main()
{
	int fahr;
	for (fahr=300; fahr>=0; fahr=fahr-20)
		printf("%4d\t%4.2f\n", fahr, (5.0/9.0)*(fahr-32));
}
