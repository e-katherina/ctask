#include<stdio.h>
int main()
{
	int c, n;
	n = 0;
	while ((c = getchar()) != EOF) {
		if (c == ' ')
		     ++n;
		else n = 0;
		if (n <=  1)
		     putchar(c);
       		}
}	
