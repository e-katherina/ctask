#include<stdio.h>
float temp (int fahr)
{
        float celsius;
        celsius = 5.0/9.0*(fahr-32);
        return celsius;
}  
int main()
{
	float celsius;
        int n;
	for (n=50; n<=55; n++){
		celsius = temp(n);
		printf("%d %.2f\n", n, celsius);
	}	
}
