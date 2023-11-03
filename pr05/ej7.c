#include <stdio.h>
#include <ctype.h>

void label(char cadena[]),border(char n),menu();
int check(char cadena[]);
int p_enroll(),p_filter(),p_list(),p_quit();


int main(void){

    int option;
    border('-');
    label("GAMER PROJECT");
    border('-');

    do{
        menu();
        option=check("Are you sure you want con continue? (YN)");
    }while (option!=0);

    return 0;
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

void menu() {
    char option;
    
    do {
        printf("E) Enrol\nQ) Quit\nL) List\nF) Filter\n");
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
            default:
                printf("Invalid option\n");
        }
    } while (option != 'X');
}

int p_enroll(void){
    int value = 0;
    return value;
}

int p_quit(void){
    int value = 0;
    return value;
}


int p_list(void){
    int value = 0;
    return value;
}

int p_filter(void){
    int value = 0;
    return value;
}


