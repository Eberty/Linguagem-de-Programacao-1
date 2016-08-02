#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	system ("color f0");
	int A = 10, B;
	B = A + 1;
	printf("\n A = %d, B = %d", A, B);
	A = B + 1;
	printf("\n A = %d", A);
	B = A + 1;
	printf ("\n B = %d", B);
	A = B + 1;
	printf ("\n A = %d, B = %d\n", A, B);
	system("pause");
	return(0);
}
