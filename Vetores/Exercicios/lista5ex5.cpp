#include <stdio.h>
#include <stdlib.h>
int main (void)
{
	system ("color 0f");
	int fat, cont, i, A[15], B[15];
	for (i=0; i<15; i++){
		printf ("Apresente A[%d]: ", i);
		scanf ("%d", &A[i]);
		fat=1;
		cont=1;
		while (cont<=A[i]){
			fat*=cont;
			cont++;
		}
		B[i]=fat;
	}
	for (i=0; i<15; i++){
		printf ("\nA[%d]= %d		B[%d]= %d", i, A[i], i, B[i]);
	}
	system ("pause");
	return (0);
}
