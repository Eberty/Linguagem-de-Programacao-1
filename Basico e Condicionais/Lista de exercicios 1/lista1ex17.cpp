#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	system ("color f0");
	int A, B, C, D;
	float MEDP;
	printf ("Informe o valor dos numers de lvalores 1, 2, 3, 4 Respectivamente: \n");
	scanf ("%d %d %d %d", &A, &B, &C, &D);
	MEDP=((A*1)+(B*2)+(C*3)+(D*4))/10;
	printf("A media ponderada eh: %f", MEDP);
	system ("pause");
	return (0);
	}
