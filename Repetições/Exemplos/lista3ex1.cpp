#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int n, m, i, s=0;
    double mult=1;
    //ler m e n  calcule e imprima a soma de todos os valores pares e a multiplicaçao de todos os impares do intervalo
    printf ("Apresente N como inicial: ");
    scanf ("%d", &n);
    printf ("Apresente m como final: ");
    scanf ("%d", &m);
    if (m<=n)
        printf ("M nao pode ser menor q N\n");
    else{
        for (i=n; i<m; i++)
            if (i%2==0)
                s+=i;
            else
                mult*=i;
    }
    printf ("Soma dos pares: %d\n", s);
    printf ("Multiplicacao dos impares: %.0f\n", mult);
    system("pause");
    return(0);
}
