#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *fichero=(fopen("formato.txt","w"));

    const char *formato = "%s %d %f";
    char *cadena = malloc(sizeof(char));
    int entero;
    float real;

    printf("Dame una cadena: ");
    scanf("%s", cadena);
    printf("Dame un entero: ");
    scanf("%d", &entero);
    printf("Dame un real: ");
    scanf("%f", &real);

    fprintf(fichero,formato,cadena,entero,real);
    fclose(fichero);

    return 0;
}




