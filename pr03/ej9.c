#include <stdio.h>
#include <string.h>

int main (void){

    char string1[100];
    

    do{

        printf("Dame una cadena (1-24 char)\n" );
        scanf("%s", string1);

    } while ( (0 > strlen(string1)) || (strlen (string1) > 24) );

    printf ("La cadena tiene %ld caracteres\n", strlen(string1));

    return 0;

}