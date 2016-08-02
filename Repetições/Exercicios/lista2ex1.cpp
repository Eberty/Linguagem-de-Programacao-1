#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main (void)
{
	system ("color f0");
	int x,q;
	for (x=15; x<=200; x++)
	{
		q=pow(x,2);
		printf ("O quadrado de %d eh: %d\n", x,q);
	}
	system ("pause");
	return (0);	
}
