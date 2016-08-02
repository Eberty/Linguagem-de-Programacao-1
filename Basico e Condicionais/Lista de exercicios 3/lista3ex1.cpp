#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	system ("color f0");
	int N1, N2, S;
	printf ("Apresente dois numeros: \n");
	scanf ("%d %d", &N1, &N2);
	S = N1 + N2;
	if ( S >= 10)
		S = S + 5;
	else
		S = S - 7;
	printf ("O valor da soma condicionada e: %d \n", S);
	system ("pause");
	return (0);
}
