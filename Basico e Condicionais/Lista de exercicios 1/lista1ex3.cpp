#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	system ("color f0");
	int A, B, C;
	printf ("Apresnete a e b respectivamente: ");
	scanf ("%d %d", &A, &B);
	C=A;
	A=B;
	B=C;
	printf ("O novo valor de A eh %d O novo valor de B eh %d: \n", A, B);

	system ("pause");
	return (0);
}
