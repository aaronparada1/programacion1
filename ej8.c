#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

void label(char cadena[]),border(char n), get_string(const char *mensaje, char *palabra);
int check(char cadena[]), get_integer(const char *mensaje);
char get_character(const char *mensaje, const char *pattern);
int p_enroll(),p_filter(),p_list(),p_quit();



int main(void){

    int test;
    //char option;
    
    border('-');
    label("GAMER PROJECT");
    border('-');

    printf("E) Enrol\nQ) Quit\nL) List\nF) Filter\nX) Exit\n");
    //option = get_character("Choose an option", "EQLFX");

    switch (get_character("\nChoose an option", "EQLFX")) {
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
                test=check("Are you sure you want con continue? ");
            }while(test != 0);
            break;

        default:
            printf("Invalid option\n");
    return 0;
    }
}

void label(char cadena[]){
    printf("%31s\n", cadena);
}

int check(char cadena[]){    
    char respuesta;
    do{
        respuesta = get_character(cadena,"YN");
        

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
    get_string("Name: ",name);
    return 0;
}

int p_quit(void){
    int value = 0;
    printf("function quit called value ->%d\n", value);
    return value;
}


int p_list(void){
    int value;
        
    value=get_integer("Code\n");
    if(value!=-1)printf("Has introducido %d\n",value);

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

int get_integer(const char *mensaje){
    char *num;
    int selector;
    
    num = malloc(sizeof(int));

    printf("%s",mensaje);
    scanf(" %s",num);

    for(int i = 0; *(num+i)!='\0'; i++){
        if(isdigit(*(num+i))==0){
            selector=0;
            break;
        
        }else{
            selector=1;
        }
    }
    if(selector==1){
        return atoi(num);  
    }else{
    return -1;
    }
    
}
    

char get_character(const char *mensaje, const char *pattern){
    char c;
    
    do{
      printf("%s \"%s\": ",mensaje,pattern);
      scanf(" %c", &c);
      
      
      c = toupper(c);
    }while(strchr(pattern,c)==NULL);

    
    return c;
}