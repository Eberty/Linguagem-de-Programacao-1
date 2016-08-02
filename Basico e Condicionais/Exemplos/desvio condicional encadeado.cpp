#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	system ("color f0");
	float SAL;
	printf ("Apresente o salario atual: ");
	scanf ("%f", &SAL);
	if (SAL < 500)
		SAL = SAL*1.15;
	else
		if (SAL <= 1000)
			SAL = SAL*1.10;
		else
			SAL = SAL*1.05;
	printf ("O novo salario com o reajuste eh de: %.2f \n ", SAL);
	system("pause");
	return(0);
}
