#include <stdio.h>
#include <ctype.h>

void label();
int check();

int main(void) {
    char ans;
    do {
        label();
        ans = check();
    } while (ans != 1);
    return 0;
}

void label() {
    printf("Hola mundo\n");
}

int check() {
    char answer;
    do {
        printf("Are you sure you want to close the app? (Y/N): ");
        scanf(" %c", &answer);
        answer = toupper(answer);
        switch (answer) {
            case 'Y':
                return 1;
            case 'N':
                break;
            default:
                return 0;
                
        }
    } while (1);
}
    
