// Ejercicio 7 
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
