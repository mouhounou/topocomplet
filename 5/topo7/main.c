#include <stdio.h>
#include <stdlib.h>

int main()
{
     int nombre = 1;

    while (nombre <= 50) {
        int i = 2;


        while (i <= nombre / 2) {
            if (nombre % i == 0) {
                break;
            }
            i++;
        }

        if (nombre % i != 0) {
            printf(" \n %d ", nombre);
        }

        nombre++;
    }
    return 0;
}
