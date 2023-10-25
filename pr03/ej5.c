#include <stdio.h>
#include <string.h>
int main(){

    char palabra[100];
    int longitud;
    do{
    printf("Dame una cadena: \n");
    scanf("%s", palabra);
    longitud = strlen(palabra);
       }while(strlen(palabra)>25);
    if (longitud<=24){
        printf("La longitud de la cadena es %d\n",longitud);
    }else{
        printf("Longitud excesiva de la cadena\n");
    }
    return 0;
}
