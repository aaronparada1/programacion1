#include <stdio.h>

int main(int argc,char *argv[]){
    //abre el archivo en  modo de escritura
    FILE *fichero = fopen(argv[1],"w");
    fprintf(fichero,"%s\n",argv[2]);

    fclose(fichero);
    return 0;

}