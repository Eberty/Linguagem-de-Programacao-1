#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	system ("color 0f");
	int H1, H2, M1, M2, HN, HV, MN, MV, S=0, P=0;
	printf ("Informe a idade de Joao: ");
    scanf ("%d", &H1);
    printf ("Informe a idade de Andre: ");
    scanf ("%d", &H2);
    printf ("Informe a idade de Maria: ");
    scanf ("%d", &M1);
    printf ("Informe a idade de Juliana: ");
    scanf ("%d", &M2);

	if ( H1==H2 || M1==M2)
    	printf ("As idades dos homens devem ser diferentes entre si, bem como as das mulheres\n");
    else
    {
       	if (H2<H1)
    	{
    		HN=H2;
    		HV=H1;
		}
		else
    	{
    		HN=H1;
    		HV=H2;
		}
		if (M2<M1)
    	{
    		MN=M2;
    		MV=M1;
		}
		else
    	{
    		MN=M1;
    		MV=M2;
		}
	S=HV+MN;
	P=HN*MV;
	printf ("A soma das idades do homem mais velho com a mulher mais nova eh: %d\n", S);
	printf ("O produto das idades do homem mais novo com a mulher mais velha eh: %d\n", P);
	}
	system ("pause");
	return (0);
}
