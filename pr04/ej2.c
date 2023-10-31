#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define M 5
#define N -5

int main(void){
    srand(time(NULL));
    
    int array[5];
    for(int i = 0; i<5; i++){
        array[i] = rand() % (M - N  + 1) + N;
        printf("%3d\n",array[i]);
    }

    return 0;
}