#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	system ("color 0f");
	float VP, VM;
	printf ("Informe a velocidade maxima permitida em Km/h: ");
	scanf ("%f", &VP);
	printf ("Qual a veocidade em que o motorista estava dirigindo (km/h)? ");
	scanf ("%f", &VM);
	if (VM<=VP)
        printf ("O motorista esta dentro da lei\n");
    else
        if ((VM-VP)<=10)
            printf ("O motorista recebera uma multa de 50 reais\n");
        else
            if ( (VM-VP)>10 && (VM-VP)<=30 )
            	printf ("O motorista recebera uma multa de 100 reais\n");
            else
                printf ("O motorista recebera uma multa de 200 reais\n");
    system ("pause");
    return(0);
}
