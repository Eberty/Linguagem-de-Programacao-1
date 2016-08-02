#include <stdio.h>
#include <stdlib.h>
int main (void)
{
	system ("color 0f");
	int A[20], B[20], C[20], i;
	for (i=0; i<20; i++){
		printf ("Apresente A[%d]: ", i);
		scanf ("%d", &A[i]);
	}
	for (i=0; i<20; i++){
		printf ("Apresente B[%d]: ", i);
		scanf ("%d", &B[i]);
	}
	for (i=0; i<20; i++){
		C[i]=A[i]-B[i];
		printf ("C[%d]= %d\n", i, C[i]);
	}
	system ("pause");
	return (0);
}
