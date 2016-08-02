#include <stdio.h>
#include <stdlib.h>
int main (void)
{
	system ("color 0f");
	long g=1, t, s=0;
	for (t=1; t<=64; t++)
	{
		s+=g;
		g*=2;
	}
	printf ("Soma: %lu\n", s);
	system ("pause");
	return(0);
}
