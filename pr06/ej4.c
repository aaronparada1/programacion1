#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float rectangulo(float base, float altura, float *dir_area);

int main(){
    
    float base;
    float altura;
    float *area;
    float perimetro;

    area = malloc(sizeof(float));

    printf("introduzca base del triangulo: ");
    scanf("%f", &base);
    printf("introduzca la altura: ");
    scanf("%f", &altura);

    perimetro = rectangulo(base, altura, area);
    
    printf("%-15s %-5.2f %-7s\n", "Altura:",altura, "cm" );
    printf("%-15s %-5.2f %-7s\n", "Base:", base, "cm" );
    printf("%-15s %-5.2f %-7s\n", "Area:", *area, "cm x cm" );
    printf("%-15s %-5.2f %-7s\n","Perimetro:",perimetro, "cm" );
    
    return 0;
}

float rectangulo(float base, float altura, float *dir_area){
    *dir_area = base * altura;
    return (base*2) + (altura*2);
    }
