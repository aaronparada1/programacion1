#include <stdio.h>

int main(void){

    int array[5];
    
    for(int i = 0; i<6; i++){
        array[i] = i*10;
        printf("%3d\n",array[i]);
    }

    return 0;
}