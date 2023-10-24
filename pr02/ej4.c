#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main(){

    char w;
    char w1 ;
    char condicion[]= "EQLFX";

    printf("Intoduzca algun caracter de la cadena \"EQLFX\":\n");
    scanf("%c", &w);
    w1 = toupper(w);

    char *resultado = strchr(condicion,w1);

 

    if (resultado != NULL){
        printf("La letra %c es %c\n", w, w1);
    }   
    else{
        printf("No es valido\n");
    }
    return 0;
}