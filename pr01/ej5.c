// Practica las conversiones de tipos

#include <stdio.h>

int main (void) {

    short enteroCorto = 30000;
    int entero = 3000000;
    float real = 3e9;

    printf ("enteroCorto: %d\n", enteroCorto);
    printf ("entero: %d\n", entero);
    printf ("real en punto flotante: %.2f\n", real);
    printf ("real en notación cientifica: %.2e\n\n", real);

    enteroCorto = entero;
    printf ("enteroCorto: %hd\n\n", enteroCorto);

    entero = real;
    printf ("entero: %d\n\n", entero);

    entero = 3000000;
    real = entero;
    printf ("entero: %d\n", entero);
    printf ("real: %.2f\n\n", real);

    entero = 1234567892;
    real = entero;
    printf ("entero: %d\n", entero);
    printf ("real: %.2f\n", real);
    printf ("real: %.9e\n", real);

    return 0;
}
