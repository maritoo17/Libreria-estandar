#include <stdio.h>

int main() {
    FILE *fichero;
    char nombre[20];
    int edad;

    fichero = fopen("datos.txt", "r");
