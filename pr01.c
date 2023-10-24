//Ejercicio1
#include <stdio.h>
int main () {
fprintf (stdout, "Hola mundo");
return 0;
}


//Ejercicio2
#include <stdio.h>
int main () {
  fprintf (stdout, "Adios\nHasta Luego\n");
return 0;
}


//Ejercicio3
#include <stdio.h>
int main () {
  fprintf (stdout, "Adios\nHasta Luego\n")
return 0;
}


//Ejercicio4
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


//Ejercicio5
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


//Ejercicio6
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


// Ejercicio7 
#include <stdio.h>
#include <math.h>
int main(){
  int numero;
  double raizCuadrada;

    printf("Dame un numero entero:");
    scanf("%d", &numero);

    raizCuadrada = sqrt((double)numero);
    printf("Raiz: %.2lf \n", raizCuadrada);
    return 0;
}


//ejercicio8
#include <stdio.h>
#include <ctype.h>
int main(){

    char w;
    char w1;

    printf("Dame un caracter:\n");
    scanf("%c", &w);

    w1 = toupper(w);

    printf("La letra %c es %c\n", w, w1);
    
    return 0;
}


//Ejercicio9
#include <stdio.h>
#include <string.h>
int main(){

    char palabra[100];
    int longitud;
    printf("Dame una cadena: \n");
    scanf("%s", palabra);
    longitud = strlen(palabra);
    printf("La longitud de la cadena es %d\n",longitud);
    return 0;
}


//Ejercicio 10
#include <stdio.h>
#include <math.h>
int main(){
    int base;
    int altura;
    float area;
    float perimetro;
    printf("introduzca base del triangulo\n");
    scanf("%d", &base);
    printf("introduzca base del altura\n");
    scanf("%d", &altura);
    area = (base * altura)/2;
    perimetro = 2*(sqrt((pow(base/2,2))+pow(altura,2))) + base;
    printf("%-15s %-5d %-7s\n", "Altura:",altura, "cm" );
    printf("%-15s %-5d %-7s\n", "Base:", base, "cm" );
    printf("%-15s %-5.2f %-7s\n", "Area:", area, "cm x cm" );
    printf("%-15s %-5.2f %-7s\n","Perimetro:",perimetro, "cm" );
    return 0;
}
