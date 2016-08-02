#include <stdio.h>
#include <stdlib.h>
int main (void)
{
	system ("color 0f");
	int A[7], B[7], C[7][2], i, j;
	for (i=0; i<7; i++){
		printf ("Apresenete o elemento %d de A: ", i+1);
		scanf ("%d", &A[i]);
		C[i][0] = A[i];
	}
	for (i=0; i<7; i++){
		printf ("Apresenete o elemento %d de B: ", i+1);
		scanf ("%d", &B[i]);
		C[i][1] = B[i];
	}
	for (i=0; i<7; i++)
		for (j=0; j<2; j++){
			printf ("C[%d][%d] = %d\n", i, j, C[i][j]);
		}
	system ("pause");
	return (0);
}
