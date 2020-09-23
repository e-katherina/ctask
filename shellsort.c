#include<stdio.h>
//void shellsort1 (int v[], int n)__attribute__((constructor));

void shellsort1 (int v[], int n)
{ 	int gap, i, j, temp;
	for (gap = n/2; gap > 0; gap /= 2) {
		 printf ("\ngap = %d\n", gap);
		 for (i = gap; i < n; i++) {
			 printf ("i = %d   ", i);
			 for (j = i - gap; j >= 0 && v[j] > v[j + gap]; j -= gap) {
		 		temp = v[j];
		 		v[j] = v[j + gap];
				v[j + gap] = temp;
			}	
		}
	}
	for (i = 0; i < n; i ++){
		printf ("v[%d] = %d\n", i, v[i]);
	}
}

int main() {
	int v[5] = {5, 4, 2, 1, 1};
	int n = 5;
	shellsort1(v, n);
}
	
