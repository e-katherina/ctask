#include <stdio.h>

int main() {
	int a, b, tmp;
	scanf("%d %d", &a, &b);
	tmp = a;
	a = b;
	b = tmp;
	printf("%d %d\n", a, b);
}
