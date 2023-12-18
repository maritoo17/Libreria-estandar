#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int srand(time(NULL));
    int num = rand() % 100 +1;
    printf ("El numero aleatorio es %d\n", num);

    return 0;
}