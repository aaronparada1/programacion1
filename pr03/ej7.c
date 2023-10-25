#include <stdio.h>
#include <ctype.h>
int main(){
    char condicion;
    char  afirmacion = 'Y';
    while((toupper(condicion) != 'Y') && (toupper(condicion) != 'N')){
      printf("Are you sure you want to close the app? (Y/N)\n");
      scanf(" %c", &condicion);
      
    }
    if(condicion==afirmacion){
        printf("You have chosen \"Yes\"\n");
        }
    else{
        printf("You have chosen \"No\"\n ");
    }
    return 0;
}
