// Practica las conversiones de tipos

#include <stdio.h>

int main (void) {

    int entero;
    float real;

    entero = 4;
    real = entero/5;
    printf ("Cociente = %.2f\n", real);

    real = (1.0*entero)/5;
    printf ("Division 1 = %.2f\n", real);

    real = entero/5.0;
    printf ("Division 2 = %.2f\n", real);

    real = 4.7;
    entero = real;
    printf ("Entero = %d\n", entero);

    return 0;
}
