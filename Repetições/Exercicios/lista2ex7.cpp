#include <stdio.h>
#include <stdlib.h>
int main (void)
{
	system ("color f0");
	int ATU=0, ANT=1, PROX=0, CONT=1;
	while (CONT<=15)
	{
		PROX=ATU+ANT;
		printf ("%d\n", PROX);
		ANT=ATU;
		ATU=PROX;
		CONT++;
	}
	system ("pause");
	return(0);
}
