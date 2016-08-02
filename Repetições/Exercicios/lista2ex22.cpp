#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	system ("color 0f");
	int i=1;
	float S=0;
	while (i<=50){
		if (i%2==0)
			S+=(float(i)/3);
		else
			S+=(float(i)/1);
		i++;
	}
	printf ("S=%.3f\n", S);
    system ("pause");
    return(0);
}
