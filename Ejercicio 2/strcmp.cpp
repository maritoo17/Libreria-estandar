#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "Antoine";
    char str2[] = "Griezmann";

    int comparison = strcmp(str1, str2);

    if (comparison == 0) {
        printf("Las cadenas son iguales\n");
    } else if (comparison < 0) {
        printf("La primera cadena es menor que la segunda\n");
    } else {
        printf("La primera cadena es mayor que la segunda\n");
    }

    return 0;
}