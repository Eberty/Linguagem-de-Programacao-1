#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main (void)
{
	system ("color 0f");
	int A[10], B[10][3], i, j, cont, fat;
	for (i=0; i<10; i++){
		printf ("Apresente A[%d]: ", i);
		scanf ("%d", &A[i]);
		B[i][0] = A[i]+5;
		cont=1;
		fat=1;
		while (cont<=A[i]){
			fat*=cont;
			cont++;
		}
		B[i][1]=fat;
		B[i][2]= pow(A[i],2);
	}
	for (j=0; j<3; j++)
		for (i=0; i<10; i++){
			printf ("B[%d][%d]: %d\n", i, j, B[i][j]);
		}
	system ("pause");
	return (0);
}
