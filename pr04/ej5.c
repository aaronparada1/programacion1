#include <stdio.h>
#include <ctype.h>

int main(void){
    
    char cadena[5][25];
    int char_pos;
    int chain_pos;

    for(int i = 0; i<5;i++){
        printf("Escribe una cadena(1-24 char): ");                               //guarda en 5 cadenas una string menor de 25 chars
        scanf("%s", cadena[i]);
    }

    printf("Posicion del caracter a convertir [1-24]:");                         //pide posicion del caracter y posicion de la cadena a operar
    scanf("%d", &char_pos);
    printf("Posicion de la cadena a mostrar [1-5]:");
    scanf("%d", &chain_pos);

    --char_pos;                                                                  //corrige la indexacion desde 1 a desde 0
    --chain_pos;

    cadena[chain_pos][char_pos]=toupper(cadena[chain_pos][char_pos]);            //caracter j-esimo de la cadena i-esima en mayusuclas

    printf("La cadena en la posicion %d es %s\n",++char_pos, cadena[chain_pos]); //se tiene que devolver a la indexacion incial desde 1
    
    return 0;

}
