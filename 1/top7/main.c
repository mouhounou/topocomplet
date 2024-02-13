#include <stdio.h>
#include <stdlib.h>

int main()
{
   int number;
    int i=1;
    printf("Entrez un nombre:\n");
    scanf("%d", &number);

    if(number == 0){
        printf(" zero n'as pas de diviseur \n");
    }
        else{
                printf("Les diviseurs de %d sont:\n", number);
        }
    while(i<=number){

        if(number%i==0){
            printf("%d \n", i);
        }i++;
    }
    printf("\n");
    return 0;
}
