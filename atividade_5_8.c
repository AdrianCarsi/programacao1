//Não soube fazer como foi pedido, então para não deixar em branco fiz isto aqui.

#include <stdio.h>
#include <stdlib.h>
int main(){

char nome[50];
printf("Escreva teu nome:\n");
scanf("%c",&nome);
float salario, aliquota, aliquota1;
printf("Escreva teu salario:\n");
scanf("%f",&salario);
if(salario <1300 ) {
    printf("Isento");
}
else if(salario >=1300 && salario <2300 ) {
    printf("Novo saldo:%f", aliquota=salario+(salario*0.1));
}
else{
    printf("Novo saldo:%f", aliquota1=salario+(salario*0.15));
}
   return 0;
}
