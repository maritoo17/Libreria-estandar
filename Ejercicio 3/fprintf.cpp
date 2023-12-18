#include <stdio.h>

int main() {
    FILE *file = fopen("archivos.txt", "w");
    if (file == NULL) {
        printf("No se ha podido abrir el fichero.\n");
        return 1;
    }

    fprintf(file, "Hola mundo\n");

    fclose(file);

    file = fopen("archivos.txt", "a");
    if (file == NULL) {
        printf("No se ha podido abrir para lectura.\n");
        return 1;
    }

    char buffer[100];
    fscanf(file, "%s", buffer);

    printf("El contenido del fichero es: %s\n", buffer);

    fclose(file);

    return 0;
}

