#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *fichero=(fopen("formato.txt","r"));

    const char *formato = "Cadena: %s\nEntero: %d\nReal: %f";
    char buffer[256];
    char *cadena=malloc(100*sizeof(char));
    int  entero;
    float real;

    if(fichero==NULL){
        printf("No se puede acceder al fichero foramto.txt\n");
        return 1;
    }
    
    //fgets(char *str, int size, FILE *stream);
    //str -> buffer de almacenamiento
    //size -> numero de caracteres para leer, tamaño del buffer
    //stream -> puntero en el archivo en el cual leer la linea

    while(fgets(buffer,sizeof(buffer),fichero) != NULL){
        sscanf(buffer, "%99s %d %f", cadena,&entero,&real);
        fprintf(stdout,formato,cadena,entero,real);
    }
    free(cadena);
    fclose(fichero);
    return 0;
}