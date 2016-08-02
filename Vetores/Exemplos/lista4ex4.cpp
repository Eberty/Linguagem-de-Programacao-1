#include <stdio.h>
#include <stdlib.h>
int main (void)
{	
	system ("color 0f");
	int I, J, A[5][3], B[5][3], C[5][3];
	printf ("\n Digite 15 numeros para A: ");
	for (I=0; I<5; I++)
		for (J=0; J<3; J++)
		{
			printf ("\n Digite o A[%d][%d]: ", I, J);
			scanf ("%d", &A[I][J]);
		}
	printf ("\n Digite 15 numeros para B: ");
	for (I=0; I<5; I++)
		for (J=0; J<3; J++)
		{
			printf ("\n Digite o B[%d][%d]: ", I, J);
			scanf ("%d", &B[I][J]);
		}
	for (I=0; I<5; I++)
		for (J=0; J<3; J++)
		{
			C[I][J]=A[I][J] + B[I][J];
			printf ("\n C[%d][%d] = %d", I, J, C[I][J]);
		}
	printf ("\n\n");
	system ("pause");
	return(0);
}
