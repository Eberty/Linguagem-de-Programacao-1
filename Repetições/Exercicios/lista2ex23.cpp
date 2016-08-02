#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	system ("color 0f");
	int i;
	float S=0;
	for (i=2;i<=16;i++)
	{
		if (i%2==0){
			S+=(float(i)/5);
			printf ("%.3f\n", S);
		}
		else{
			S-=(float(i)/4);
			printf ("%.3f\n", S);
		}
	}
	printf ("S=%.3f\n", S);
    system ("pause");
    return(0);
}
