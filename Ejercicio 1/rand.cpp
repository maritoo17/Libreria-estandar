#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand (time(NULL));
    int num = rand() % 100 + 1; //Genera un numero aleatorio entre 1 y 100
}