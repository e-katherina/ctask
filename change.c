#include<stdio.h>
int main ()
{
	int c;
	while ((c = getchar()) != EOF){
		if (c == '\b')
		   printf("\\b");
		if (c == '\t')
		   printf("\\t");
		if (c == '\\')
		   printf("\\");
		else putchar(c);
		 }
}
		
