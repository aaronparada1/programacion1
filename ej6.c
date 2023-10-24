// Practica las conversiones de tipos

#include <stdio.h>

int main (void) {

    float real;
    double realDoble;

    real = 25.50;
    realDoble = 25e+100;
    real = realDoble * real;
    printf ("Usando float: %.2f\n\n", real);

    real = 25.50;
    realDoble = realDoble * real;
    printf ("Usando double: %.2f\n", realDoble);
    printf ("En notación científica: %.4e\n", realDoble);

    printf ("\n");

    return 0;
}
