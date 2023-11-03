#include <stdio.h>
#include <ctype.h>

void label();
int border();

int main(void) {
    border(50);
    label();
    border(50);
}

void label() {
    printf("GAMER PROJECT\n");
}

int border(int n){

    

    //printf("Dame el numero de lineas: ");
    //scanf("%d", &n);

    

    for(int i=0; i<n; i++){

        printf("-");
    }
    printf("\n");
    return 0;

}


    
