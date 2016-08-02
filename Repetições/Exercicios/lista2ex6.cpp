#include <stdio.h>
#include <stdlib.h>
int main (void)
{
	system ("color f0");
	int x;
	for (x=1; x<=200; x++)
	{
		if (x%4==0)
			printf ("\n%d eh divisivel por 4", x);
	}
	system ("pause");
	return(0);
}
