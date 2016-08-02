#include <stdio.h>
#include <stdlib.h>
int main (void)
{
	system ("color 0f");
	int A[10], i;
	for (i=0; i<10; i++){
		printf ("Apresente A[%d]: ", i);
		scanf ("%d", &A[i]);
	}
	for (i=0; i<10; i++){
		printf ("\nA[%d]: %d", i, A[i]);
	}
	printf ("\n\n");
	system ("pause");
	return (0);
}
