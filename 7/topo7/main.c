#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nbr ;
    int div = 1;

    printf("Votre nombre \n");
    scanf("%d", nbr);

    while (nbr/div == 0 && nbr/div == 1){
        printf("divisuer : \n  %d", div);
        div++;
    }

    printf("nada");

    return 0;
}
