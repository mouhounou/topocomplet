#include <stdio.h>
#include <stdlib.h>

int main()
{   int nbr ;
    printf("Entrez un nombre pour effectuer votre multiplication!\n");
    scanf("%d", &nbr);

    for(int i= 0; i<13; i++){

        int R = nbr * i;

        printf ("%d x %d = %d \n",nbr, i ,R );

    }
    return 0;
}
