#include <stdio.h>
#include <stdlib.h>
int main (void)
{
	system ("color 0f");
	int i;
	float A[10], B[10], C[10];
	for (i=0; i<10; i++){
		printf ("Apresnete A[%d]: ", i);
		scanf ("%f", &A[i]);
	}
	printf ("\n\n");
	for (i=0; i<10; i++){
		printf ("Apresnete B[%d]: ", i);
		scanf ("%f", &B[i]);
	}
	printf ("\n\n");
	for (i=0; i<10; i++){
		C[i]= A[i] - B[i];
		printf ("\nC[%d]: %.1f", i, C[i]);
	}
	system ("pause");
	return (0);
}
