#include <stdio.h>
#include <ctype.h>
#include <string.h>

#include <stdio.h>
#include <ctype.h>
int main(){
    char condicion;
    char  afirmacion = 'Y';
    char valid[] = "YN";
    printf("Are you sure you want to close the app? (Y/N)\n");
    scanf("%c", &condicion);
    condicion = toupper(condicion);
    if (strchr(valid,condicion) != NULL){
        if(condicion == afirmacion){
            printf("You have chosen \"Yes\"\n");
            }
        else{
            printf("You have chosen \"No\"\n ");
        }
    }
    else{printf("invalid character\n");
    }
    return 0;
}