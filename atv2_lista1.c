#include <stdio.h>
#include <stdlib.h>

int main(){
system("clear");
float n1, n2, dif, quad, n3;
printf("\nDigite um numero: ");
scanf("%f", &n1);
printf("\nDigite outro número: ");
scanf("%f", &n2);
dif=n1-n2;
quad=dif*dif;
n3=(n1*n1) - (n2*n2);
printf("\nO quadrado da diferença entre %.2f e %.2f é: %.2f ", n1, n2, quad);
printf("\nA diferença dos quadrados entre %.2f e %.2f é: %.2f \n", n1, n2, n3);
return 0;

}