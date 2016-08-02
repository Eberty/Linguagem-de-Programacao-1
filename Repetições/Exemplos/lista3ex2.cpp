#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int n, m, i, m5n3;
    printf ("Apresente N como inicial: ");
    scanf ("%d", &n);
    printf ("Apresente m como final: ");
    scanf ("%d", &m);
    if (m<=n)
        printf ("M nao pode ser menor q N\n");
    else{
        for (i=n; i<=m; i++){
            if (i>=100 && i<=10000 && i%5==0 && i%3!=0)
                printf ("%d\n", i);
            }
    }
    system("pause");
    return(0);
}
