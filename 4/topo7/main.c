#include <stdio.h>
#include <stdlib.h>

int main()
{
    int somme = 0;

    for (int i = 1; i <= 10; i++) {
        somme += i * i;
       printf("noter : %d\n", somme);
    }


    printf(" ========= la somme final est %d", somme);
    printf(" =========");
    return 0;
}
