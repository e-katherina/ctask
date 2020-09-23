#include<stdio.h>

int main() {
	int i, n=20;
	char a[20] = {1, 2};
	for (i = 0; i < n; i ++)
		printf("%6d%c", a[i], (i%10 == 9 || i == n-1) ? '\n' : ' ');
}
