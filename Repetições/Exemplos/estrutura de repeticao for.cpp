#include <stdio.h>
#include <stdlib.h>
int main (void)
{
	system ("color f0");
	int A, B, R;
	for (A = 1, B = 1; A + B < 15; A+=2, B++)
		{
		R = A + B;
		printf ("Resultado = %d\n", R);
		}
	system ("pause");
	return(0);
}
