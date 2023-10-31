#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define M 9
#define N -9

int main(void){
    srand(time(NULL));
    
    int array[5][3];
    for(int i = 0; i<5; i++){
        for (int j = 0; j<3; j++){
            array[i][j] = rand() % (M - N  + 1) + N;
            printf ("%2d ", array[i][j]);
        }
        printf("\n");
            
    }

    return 0;
}