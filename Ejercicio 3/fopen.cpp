#include <stdio.h>

int main() {
    FILE *fichero;
    char nombre[20];
    int edad;

    fichero = fopen("datos.txt", "r");

    if (fichero == NULL) {
        printf("No se ha podido abrir el fichero.\n");
        return 1;
    }

