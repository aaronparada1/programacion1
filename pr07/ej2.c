#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void rectangulo(float base, float altura, float *dir_area);

int main(int argc, char *argv[]) {
    
    if (argc != 3) {
        printf("Error: Debes proporcionar la base y la altura del rectángulo.\n");
        return 1;
    }

    float base = atof(argv[1]);
    float altura = atof(argv[2]);

    float *area = malloc(sizeof(float));
    
    if (area == NULL) {
        printf("Error: No se pudo asignar memoria para el área.\n");
        return 1;
    }

    rectangulo(base, altura, area);
    float perimetro = 2 * (base + altura);

    printf("%-15s %-5.2f %-7s\n", "Altura:", altura, "cm" );
    printf("%-15s %-5.2f %-7s\n", "Base:", base, "cm" );
    printf("%-15s %-5.2f %-7s\n", "Area:", *area, "cm x cm" );
    printf("%-15s %-5.2f %-7s\n", "Perimetro:", perimetro, "cm" );
    
    free(area);

    return 0;
}

void rectangulo(float base, float altura, float *dir_area){
    *dir_area = base * altura;
}