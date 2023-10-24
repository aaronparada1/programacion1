//ejercicio 78
#include <stdio.h>
#include <ctype.h>
int main(){

    char w;
    char w1;

    printf("Dame un caracter:\n");
    scanf("%c", &w);

    w1 = toupper(w);

    printf("La letra %c es %c\n", w, w1);
    
    return 0;
}