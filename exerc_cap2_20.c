20. O banco XXX concederá um crédito especial com juros de 2% aos seus clientes
de acordo com o saldo médio no último ano. Faça um programa que leia o saldo
médio de um cliente e calcule o valor do crédito de acordo com a tabela a seguir.
O programa deve imprimir uma mensagem informando o saldo médio e o valor
de crédito.

Saldo Médio       Percentual
de 0 a 500        nenhum crédito
de 501 a 1000    30% do valor do saldo médio
de 1001 a 3000   40% do valor do saldo médio
acima de 3001    50% do valor do saldo médio

//Não soube fazer com switch, então usei if para não deixar em branco

#include <stdio.h>
int main(){
float s, s1, s2, s3, s4, s5, s6, s7;
s1= s+((2*s)/100);
s2= s+((30*s)/100);
s3= s2+((2*s2)/100);
s4= s+((40*s)/100);
s5= s4+((2*s4)/100);
s6= s+((50*s)/100);
s7= s6+((2*s6)/100);
printf("Informe seu saldo:\n");
scanf("%f", s);
 if(s <= 500) {
printf("Seu saldo é: %f", s1);
}
else if(s >= 501 && s <= 1000) {
printf("Seu saldo é: %f", s3);
}
else if(s >= 1001 && s <= 3000) {
printf("Seu saldo é: %f", s5);
}
else {
printf("Seu saldo é: %f", s5);
}
return 0;
}
