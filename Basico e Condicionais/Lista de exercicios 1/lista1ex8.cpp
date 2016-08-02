#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	system("color f0");
	int A=10, B;
	printf("\n A = %d", A);
	B=++A;
	printf("\n B = %d", B);
	A=++B;
	printf("\n A = %d", A);
	B=++A;
	printf("\n B = %d", B);
	A=++B;
	printf("\n A = %d, B= %d \n", A,B);
	system("pause");
	return(0);
}
