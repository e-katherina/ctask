#include <stdio.h>
int main() {
	int a = 444;
	printf("%d\n", a & 127);
	printf("%d\n", a & 0177);
	printf("%d\n", a & 0x7F);
	printf("%d\n", a & 0b1111111);
}
