#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define M 5
#define N -5

int main(void){
    int espacio;
    int *array;

    printf("Dame un entero [1, 10]:");
    scanf("%d",&espacio);
    srand(time(NULL));
    
    array = malloc(espacio*sizeof(int));

    for(int i = 0; i<espacio; i++){
        *(array+i)= rand() % (M - N  + 1) + N;
        printf("%3d\n",*(array+i));
    }

    return 0;
}
