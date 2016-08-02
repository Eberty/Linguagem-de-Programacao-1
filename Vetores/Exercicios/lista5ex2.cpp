#include <stdio.h>
#include <stdlib.h>
int main (void)
{
	system ("color 0f");
	int i;
	float A[10], B[10];
	for (i=0; i<10; i++){
		printf ("Apresente A[%d]: ", i);
		scanf ("%f", &A[i]);
		B[i]=A[i]*3;
	}
	for (i=0; i<10; i++){
		printf ("\nB[%d]: %.1f", i, B[i]);
	}
	system ("pause");
	return (0);
}
