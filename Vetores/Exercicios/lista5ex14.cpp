#include <stdio.h>
#include <stdlib.h>
int main (void)
{
	system ("color 0f");
	int i, j, A[5][5], B[5][5];
	for (j=0; j<5; j++)
		for (i=0; i<5; i++){
			printf ("Apresente A[%d][%d]: ", i, j);
			scanf ("%d", &A[i][j]);
		}
	for (j=0; j<5; j++)
		for (i=0; i<5; i++)
			if (i==j)
				B[i][j]= A[i][j]*3;
			else
				B[i][j]= A[i][j]*2;
	printf ("\n\n");
	for (j=0; j<5; j++)
		for (i=0; i<5; i++)
			printf ("B[%d][%d]: %d\n", i, j, B[i][j]);
	system ("pause");
	return (0);
}
