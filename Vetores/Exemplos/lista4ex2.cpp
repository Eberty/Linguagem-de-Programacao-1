#include <stdio.h>
#include <stdlib.h>
int main (void)
{
	system ("color 0f");
	int i, A[10], B[10];
	for (i=0; i<10; i++){
		printf ("\nApresente o elemento %d do vetor A: ", i+1);
		scanf ("%d", &A[i]);
		B[i]=A[i]*5;
	}
	for (i=0; i<10; i++){
		printf ("\nB[%d]= %d", i+1, B[i]);
	}

	return (0);
}
