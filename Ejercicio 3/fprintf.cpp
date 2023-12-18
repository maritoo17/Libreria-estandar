#include <stdio.h>

int main() {
    FILE *file = fopen("archivos.txt", "w");
    if (file == NULL) {
        printf("No se ha podido abrir el fichero.\n");
        return 1;
    }
}