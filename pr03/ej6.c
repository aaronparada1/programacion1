#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main(){

    char w;
    char w1 ;
    char condicion[]= "EQLFX";
    do{
      printf("Intoduzca algun caracter de la cadena \"EQLFX\":\n");
      scanf(" %c", &w);
      
      w1 = toupper(w);
    }while(strchr(condicion,w1)==NULL);
    
    printf("La letra %c es %c\n", w, w1);

    return 0;
}
