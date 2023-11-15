#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fichero = fopen("formato.txt", "r");

    const char *formato = "Cadena: %s\nEntero: %d\nReal: %.2f\n";
    char buffer[256];
    char test;
    char *cadena = malloc(100 * sizeof(char));
    int entero;
    float real;

    if (fichero == NULL) {
        printf("No se puede acceder al fichero formato.txt\n");
        return 1;
    }

    while (fgets(buffer, sizeof(buffer), fichero) != NULL) {
        if (sscanf(buffer, "%99s %d %f %c", cadena, &entero, &real, &test) == 3) {
            fprintf(stdout, formato, cadena, entero, real);
        } else {
            fprintf(stdout, formato, cadena, entero, real);
            printf("Mal formato\n");
            if (sscanf(buffer, "%99s %d %f %c", cadena, &entero, &real, &test) < 3) {
                printf("Faltan datos\n");
            } else {
                printf("Sobran datos\n");
            }
        }
        printf("\n");
    }

    free(cadena);
    fclose(fichero);
    return 0;
}




