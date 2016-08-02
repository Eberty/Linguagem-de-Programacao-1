#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main (void)
{
	system ("color f0");
	int x, q;
	for (x=0; x<=15; x++)
	{
		q= pow(3,x);
		printf ("3 elevado a %d eh %d\n", x, q);
	}
	system ("pause");
	return(0);
}
