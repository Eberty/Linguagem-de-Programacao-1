#include <stdio.h>
#include <stdlib.h>
int main (void)
{
	int x, s=0;
	for (x=1; x<=500; x++)
		{
			if (x%2==0)
				s+=x;
		}
	printf ("A soma dos pares de 1 a 500 eh: %d\n", s);
	system ("pause");
	return(0);
}
