#include <stdio.h>

int main(void){

    char name[100];
    int id;

    printf("Escribe la linea con el formato \"ID nombre\": ");
    scanf("%d %s",&id, name);

    if(id>0) printf("ID: %d\nnombre: %s\n",id ,name);
    
    return 0;
    
}