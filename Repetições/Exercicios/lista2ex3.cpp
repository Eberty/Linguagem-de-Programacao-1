#include <stdio.h>
#include <stdlib.h>
int main (void)
{
	int x, ant=0;
	for (x=1; x<=100; x++)
		ant+=x;
	printf ("A soma dos 100 primeiros numeros eh: %d\n", ant);
	system ("pause");
	return(0);
}
