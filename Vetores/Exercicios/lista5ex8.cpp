#include <stdio.h>
#include <stdlib.h>
int main (void)
{
	system ("color 0f");
	int i, A[5], B[5], C[5], D[15];
	for (i=0; i<5; i++){
		printf ("Apresente A[%d]: ", i);
		scanf ("%d", &A[i]);
		D[i]= A[i];
	}
		for (i=0; i<5; i++){
		printf ("Apresente B[%d]: ", i);
		scanf ("%d", &B[i]);
		D[i+5]= B[i];
	}
	for (i=0; i<5; i++){
		printf ("Apresente C[%d]: ", i);
		scanf ("%d", &C[i]);
		D[i+10]= C[i];
	}
	for (i=0; i<15; i++){
		printf ("D[%d]: %d\n", i, D[i]);
	}
	system ("pause");
	return (0);
}
