// Ejercicio 7 
#include <stdio.h>
#include <math.h>
int main(){
  int numero;
  double raizCuadrada;

    printf("Dame un numero entero: ");
    scanf("%d", &numero);
    if(numero>=0 && numero<=1000){
        raizCuadrada = sqrt((double)numero);
        printf("Raiz: %.2lf \n", raizCuadrada);
    }
    else{printf("Valor incorrecto\n");}
    return 0;
}