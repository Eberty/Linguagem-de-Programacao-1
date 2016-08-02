#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main (void)
{
	system ("color 0f");
	int i, A[15], B[15];
	for (i=0; i<15; i++){
		printf ("Apresnete A[%d]: ", i);
		scanf ("%d", &A[i]);
		B[i]= pow(A[i],2);
	}
	printf ("\n\n");
	for (i=0; i<15; i++){
		printf ("\nA[%d]: %d", i, A[i]);
	}
	printf ("\n\n");
	for (i=0; i<15; i++){
		printf ("\nB[%d]: %d", i, B[i]);
	}
	system ("pause");
	return (0);
}
