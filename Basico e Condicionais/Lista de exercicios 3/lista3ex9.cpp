#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	system ("color 0f");
	int X;
	printf ("1 - Circunferencia\n2 - Triangulo\n3 - Trapezio\n4 - Retangulo\n");
	printf ("Escolha o poligono (pelo numero): \n");
	scanf ("%d", &X);
	switch (X)
	{
		case 1: printf("\nVoce escolheu: Circunferencia\n");
		{
			float A, R;
			printf ("Apresnet o valor do raio: ");
			scanf ("%f", &R);
			A=3.14*R*R;
			printf ("A area da circunferencia eh: %.2f\n", A);
		}
			break;
		case 2: printf("\nVoce escolheu: Triangulo\n");
		{
			float A,B,H;
			printf ("Apresente a base: ");
			scanf ("%f", &B);
			printf ("Apresente a altura: ");
			scanf ("%f", &H);
			A=(B*H)/2;
			printf ("A area do triangulo eh: %.2f\n", A);
		}
			break;
		case 3: printf("\nVoce escolheu: Trapezio\n");
		{
			float A,B,b,H;
			printf ("Apresente as bases: \n");
			scanf ("%f %f", &B, &b);
			printf ("Apresente a altura: ");
			scanf ("%f", &H);
			A=(B+b)*H/2;
			printf ("A area do trapezio eh: %.2f\n", A);
		}
			break;
		case 4: printf("\nVoce escolheu: Retangulo\n");
		{
			float A, L1, L2;
			printf ("Apresente os lados: \n");
			scanf ("%f %f", &L1, &L2);
			A=L1*L2;
			printf ("A area do retangulo eh: %.2f\n", A);
		}
			break;
		default: printf ("Opcao invalida\n"); break;
	}
	system ("pause");
	return (0);
}
