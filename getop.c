#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>

#define MAXOP 100 /*максимальный развер опуранда или оператора*/
#define NUMBER '0' /*признак числа*/
#define MAXVAL 100 /*максимальная глубина стека*/
#define BUFSIZE 100 

int getop(char s[]);
void push(double);
double pop(void);
int getch (void);
void ungetch (int);
char buf[BUFSIZE]; /*буфер для ungetch*/

/*калькулятор с обратной польской записью*/
int main()
{
	int type;
	double op2;
	char s[MAXOP];
	while ((type = getop(s)) != EOF) {
		switch (type) {
			case NUMBER: 
				//printf("NUMBE");
				push(atof(s));
				//printf("NUMBER");
				break;
			case '+': 
				push(pop()+pop());
				break;
			case '*':
				push(pop()*pop());
				break;
			case '-':
				op2 = pop();
				push(pop()-op2);
				break;
			case '/':
				op2 = pop();
				if (op2 != 0.0)
					push(pop()/op2);
				else
					printf ("ошибка: деление на нуль\n");
				break;
			case '\n':
				printf ("\t%.8g\n", pop());
				break;
			default:
				printf("ошибка: неизвестная операция %s\n", s);
				break;
		}
	}
	return 0;
}

int sp=0; /*следующая позиция в стеке*/
double val[MAXVAL]; /*стек*/

/*push: положить значение f в стек*/
void push(double f)
{
	if (sp<MAXVAL)
		val[sp++]=f;
	else
		printf ("ошибка: стен полон, %g не помещается\n", f);
}

/*pop: взять с вершины стека и выдать в качестве результата*/
double pop(void) {
	if (sp > 0)
		return val[--sp];
	else {
		printf ("ошибка: стек пуст\n");
		return 0.0;
	}
}



/*getop poluchaet sleduiushii operator ili operand*/

int getop(char s[])
{
	int i,c;
	while ((s[0] = c = getch()) == ' ' || c == '\t')
		;
	//s[1]='\0';
	if (!isdigit(c) && c!='.'){
		return c;
	}
	i = 0;
	if (isdigit(c))
		while (isdigit(s[++i] = c = getch()))
			;
	if (c == '.')
		while (isdigit(s[++i] = c = getch()))
			;
	s[i] = '\0';
	if (c != EOF)
		ungetch(c);
	return NUMBER;
}

int bufp = 0; /*след, свободная позиция в буфере*/

int getch(void) {
	return (bufp > 0) ? buf[--bufp] : getchar ();
}

void ungetch(int c) {
	if (bufp >= BUFSIZE)
		printf ("ungetch: слишком много символов\n");
	else {
		printf("%c ungetch\n", c);
		buf[bufp++] = c;
	}
}
