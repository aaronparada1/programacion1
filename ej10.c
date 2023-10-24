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