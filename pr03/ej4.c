#include <stdio.h>
#include <math.h>
int main(){
  int num;
  do{
    printf("Dame un entero [0-1000]: ");
    scanf("%d", &num);
  }while(num>=1000 || num<=0);
  
  printf("Raiz:%5.2f\n", sqrt(num));
  return 0;
}
