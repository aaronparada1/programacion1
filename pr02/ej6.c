#include <stdio.h>
#include <ctype.h> 
#include <string.h>
int main(){
    char option;
    
    printf("......................Selection menu......................\n");
    printf("E) Enrol\nQ) Quit\nL) List\nF) Filter\n");
    scanf("%c",&option);
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
        default:
            printf("Invalid option\n");
    }
    return 0;
    }