#include <stdio.h>
int main(){
    float numero1=0;
    float numero2=0;
    char operador[2];
    printf("Bienvenido a calculadora\nIntroduce la operacion deseada\n");
    scanf("%f %1s %f", &numero1, operador, &numero2);
    switch(operador[0]){
        case '*':
            printf("%f", numero1 * numero2);
            break;
        case '+':
            printf("%f", numero1+numero2);
            break;
        case'-':
            printf("%f", numero1-numero2);
            break;
        case'/':
            printf("%f", numero1/numero2);
            break;
        default:
            printf("Operacion no valida\n");

    }

    return 0;
}