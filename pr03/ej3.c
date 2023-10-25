#include <stdio.h>
#include <math.h>
int main(){
  int i=0;
  int ciclos;
  printf("Dame el numero de valores: ");
  scanf("%d", &ciclos);
  while(i<ciclos){
    float num;
    printf("Dame un numero real: ");
    scanf("%f",&num);
    printf("Cuadrado de %.2f: %.2f\n", num, pow(num,2));
    i++;
  }
  return 0;
}
