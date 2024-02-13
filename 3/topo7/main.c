#include <stdio.h>
#include <stdlib.h>

int main()
{
int a = 0, b = 1, suivant, compteur = 10;

    while (compteur > 0 && compteur <= 10) {
        printf(" \n %d ", a);
        suivant = a + b;
        a = b;
        b = suivant;
        suivant--;
    }
    return 0;
}
