#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	system ("color f0");
	int A = 10, B = 20, C;
	C = A;
	B = C;
	A = B;
	printf("\n A = %d, B = %d, C = %d \n", A, B, C);
	system("pause");
	return(0);
}
