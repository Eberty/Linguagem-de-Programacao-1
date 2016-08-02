#include <stdio.h>
#include <stdlib.h>
int main (void)
{
	system ("color 0f");
	int A[12], B[12], C[12][2], i, j;
	for (i=0; i<12; i++){
		printf ("Apresente A[%d]: ", i);
		scanf ("%d", &A[i]);
		C[i][0] = A[i]*2;
	}
	for (i=0; i<12; i++){
		printf ("Apresente B[%d]: ", i);
		scanf ("%d", &B[i]);
		C[i][1] = B[i]-5;
	}
	for (i=0; i<12; i++)
		for (j=0; j<2; j++){
			printf ("C[%d][%d] = %d\n", i, j, C[i][j]);
	}
	system ("pause");
	return (0);
}
