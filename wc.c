#include<stdio.h>
#define IN 1
#define OUT 0
int main()
{
	int c, nl, nw, nc, state;
	state = OUT;
	nl = nw = nc = 0;
	while ((c = getchar()) != EOF) {
		++nc;
		if (c == '\n')
			++nl;
		if (c == ' ' || c == '\t' || c == '\n')
		{
			state = OUT;
		//	printf("%c OUT", c);
		}
		else if (state ==  OUT) {
		//	printf("%c IN", c);
			state = IN;
			++nw;
		}
	}
	printf("%d %d %d\n", nl, nw, nc);
}


