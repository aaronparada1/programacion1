#include <stdio.h>
#include <ctype.h>

void label(char cadena[]),border(char n), get_string(const char *mensaje, char *palabra);
int check(char cadena[]);
int p_enroll(),p_filter(),p_list(),p_quit();



int main(void){

    int test;
    char option;
    border('-');
    label("GAMER PROJECT");
    border('-');


    printf("E) Enrol\nQ) Quit\nL) List\nF) Filter\nX) Exit\n");
    scanf(" %c", &option);
    option = toupper(option);

    switch (option) {
        case 'E':
            p_enroll();
            break;

        case 'Q':
            p_quit();
            break;

        case 'L':
            p_list();
            break;

        case 'F':
            p_filter();
            break;

        case 'X':
            do{
                test=check("Are you sure you want con continue? (YN)\n");
            }while(test != 0);
            break;

        default:
            printf("Invalid option\n");
    return 0;
    }
}

void label(char cadena[]){
    printf("%s\n", cadena);
}

int check(char cadena[]){
    char respuesta;    
    do{
        printf("%s",cadena);
        scanf(" %c", &respuesta);

        if(toupper(respuesta) == 'N'){
            return 1;

        }else if(toupper(respuesta)=='Y'){
            return 0;

        }else{
            printf("Invalid option please enter 'Y' or 'N'\n");
        }
    }while(1);
}

void border(char n){

    for(int i=0; i<50; i++){

        printf("%c",n);
    }
    printf("\n");
}

int p_enroll(void){
    char name[100];
    get_string("Name ",name);
    return 0;
}

int p_quit(void){
    int value = 0;
    printf("function quit called value ->%d\n", value);
    return value;
}


int p_list(void){
    int value = 0;
    printf("function list called value->%d\n", value);
    return value;
}

int p_filter(void){
    int value = 0;
    printf("function filter called value->%d\n", value);
    return value;
}

void get_string(const char *mensaje, char *palabra){

    int contador=0;
    printf("%s",mensaje);
    scanf(" %s",palabra);
    for(int i=0;*(palabra+i)!='\0';i++){
        contador++;
    }
    if (contador<=24){
        printf("%s\n", palabra);
    }else{
        printf("Longitud excesiva de la cadena\n");
    }
    

    
}