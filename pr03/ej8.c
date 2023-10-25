#include <stdio.h>

int main (void){

    int n;

    printf("Dame el numero de lineas: ");
    scanf("%d", &n);

    for(int i=0; i<=n; i++){

        for(int i=0; i<51; i++){

            printf("-");
        }

        printf("\n");
        
    }
    return 0;

}