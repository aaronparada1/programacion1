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