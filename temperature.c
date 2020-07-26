#include<stdio.h>
int main()
{
	int lower, upper, step;
	float fahr, celsius;
	printf ("Celsius to Fahrenheit\n");
	lower = 0;
	upper = 300;
	step = 20;
	fahr = lower;
	while (fahr <= upper) {		
		celsius = (5.0/9.0)*(fahr-32.0);
		printf("%4.0f\t%5.2f\n", fahr, celsius);
		fahr = fahr+step;
	}
}	
