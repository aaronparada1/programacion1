#include <stdio.h>
#include <ctype.h>

void label();
void border(char n);

int main(void) {
    border('*');
    label();
    border('*');
}

void label() {
    printf("GAMER PROJECT\n");
}

void border(char n){

    
    for(int i=0; i<50; i++){

        printf("%c",n);
    }
    printf("\n");

}


    
