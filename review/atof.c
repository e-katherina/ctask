#include <stdio.h>
#include <ctype.h>
#define MAXLINE 100
/* примитивный калькулятор */

double atof (char s[]);
int getlinee (char line[], int max);

int main() {
	double sum, atof (char[]);
	char line[MAXLINE];
	int getlinee (char line[], int max);
	sum = 0;
	while (getlinee(line, MAXLINE) > 0)
		printf ("\t%g\n", sum += atof(line));
	return 0;
}

double atof (char s[]) {
	double val, power;
	int i, sign;
	for (i = 0; isspace (s[i]); i++)
		; /* игнорирование левых символов-разделителей */
	sign = (s[i] == '-') ? -1 : 1;
	if (s[i] == '+' || s[i] == '-')
		 i++;
	for (val = 0.0; isdigit (s[i]); i++)
		 val = 10.0 * val + (s[i] - '0');
	if (s[i] =='.')
		 i++;
	for (power = 1.0; isdigit(s[i]); i++) {
		val = 10.0 * val + (s[i] - '0');
	power *= 10.0;
 	}
	return sign*val/power;
}

int getlinee (char line[], int max) {
	int i, c;
	for (i = 0; i < max-1 && (c = getchar()) != '\n'; i++)
		line[i] = c;
	line[i] = '\0'; //ask
	return i;
}
