#include <stdio.h>
void printBits(size_t const size, void const * const ptr)
{
    unsigned char *b = (unsigned char*) ptr;
    unsigned char byte;
    int i, j;

    for (i=size-1;i>=0;i--)
    {
        for (j=7;j>=0;j--)
        {
            byte = (b[i] >> j) & 1;
            printf("%u", byte);
        }
    }
    //puts("");
    printf("    ");
}

int bitcount(unsigned x) {
	int b, x_1;
	for (b = 0; x != 0; x &= (x-1)) {
		b++;
		x_1 = x - 1;
		printBits(sizeof(x), &x);
		printBits(sizeof(x), &x_1);
		printf("  %d\n", b);
	}
	return b;
}

int main() {
	unsigned int a, b;
	scanf("%d", &a);
	b = bitcount(a);
	printf("answer is %d\n", b);
}
