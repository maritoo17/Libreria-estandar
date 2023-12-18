#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0));

    int num = rand() % 100 +1; //Coge un numero aleatorio entre 0 y 99 y le suma 1
    printf ("El numero aleatorio es %d\n", num);

    return 0;
}