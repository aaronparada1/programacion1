#include <stdio.h>
#include <ctype.h> 
#include <string.h>
int main(){
    char option;
    char option2;
    
    do{
    printf("E) Enrol\nQ) Quit\nL) List\nF) Filter\nX) Exit\n");
    scanf(" %c",&option);
    option=(toupper(option));

    
    switch (option){
    case 'E':
    printf("You've selected Enroll\n");
    break;

    case 'Q':
    printf("You've selected Quit\n");
    break;

    case 'L':
    printf("You've selected List\n");
    break;

    case 'F':
    printf("You've selected Filter\n");
    break;

    case 'X':

    do{
        printf("Are you sure you want to clase de app (YN):\n");
        scanf(" %c",&option2);
    }while(toupper(option2) != 'N' && toupper(option2) != 'Y');
    printf("You've selected Exit\n");
    }

   
    }while (option != 'X' || toupper(option2)=='N');


 

    return 0;
}