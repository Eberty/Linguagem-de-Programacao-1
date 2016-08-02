#include <stdio.h>
#include <stdlib.h>
int main (void)
{
	system ("color 0f");
	int i, A[20], B[20];
	for (i=0; i<20; i++){
		printf ("Apresente A[%d]: ", i);
		scanf ("%d", &A[i]);
		B[19-i]= A[i];
	}
	for (i=0; i<20; i++){
		printf ("A[%d]: %d			B[%d]: %d\n", i, A[i], i, B[i]);
	}
	system ("pause");
	return (0);
}
