#include<stdio.h>
int main()
{
	float fahr, celsium;
	celsium = 0;
	while (celsium <= 100) {
		fahr = 9.0/5.0*celsium+32;
		printf("%4.0f\t%3.0f\n", celsium, fahr);
		celsium = celsium+20;
	}
}

