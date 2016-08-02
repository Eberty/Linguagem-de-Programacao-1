#include <stdio.h>
#include <stdlib.h>
int main (void)
{
	system ("color 0f");
	int i;
	float A[15], B[15], C[30];
	for (i=0; i<15; i++){
		printf ("Apresente A[%d]: ", i);
		scanf ("%f", &A[i]);
		C[i]= A[i];
	}
	printf ("\n");
	for (i=0; i<15; i++){
		printf ("Apresente B[%d]: ", i);
		scanf ("%f", &B[i]);
		C[i+15]= B[i];
	}
	printf ("\n\n");
	for (i=0; i<30; i++){
		printf ("C[%d]: %.1f\n", i, C[i]);
	}
	system ("pause");
	return (0);
}
