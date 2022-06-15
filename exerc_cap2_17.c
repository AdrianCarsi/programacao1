17. Depois da liberação do governo para as mensalidades dos planos de saúde, as
pessoas começaram a fazer pesquisas para descobrir um bom plano, não muito
caro. Um vendedor de um plano de saúde apresentou a tabela a seguir. Faça um
programa que entre com o nome e a idade de uma pessoa e imprima o nome e o
valor que ela deverá pagar.
  Idade                  Valor
Até 10 anos              R$30,00
Acima de 10 até 29 anos R$60,00
Acima de 29 até 45 anos R$120,00
Acima de 45 até 59 anos R$150,00
Acima de 59 até 65 anos R$250,00
Maior que 65 anos       R$400,00
  
  #include <stdio.h>

int main() {
char nome;
int idade;
printf("Informe teu nome:\n");
scanf("%c", &nome);
printf("Informe sua idade:\n");
scanf("%i", &idade);
switch (idade) {

case 0:
printf("Valor de R$30,00");
break;
case 1:
printf("Valor de R$30,00");
break;
case 2:
printf("Valor de R$30,00");
break;
case 3:
printf("Valor de R$30,00");
break;
case 4:
printf("Valor de R$30,00");
break;
case 5:
printf("Valor de R$30,00");
break;
case 6:
printf("Valor de R$30,00");
break;
case 7:
printf("Valor de R$30,00");
break;
case 8:
printf("Valor de R$30,00");
break;
case 9:
printf("Valor de R$30,00");
break;
case 10:
printf("Valor de R$30,00");
break;
case 11:
printf("Valor de R$60,00");
break;
case 12:
printf("Valor de R$60,00");
break;
case 13:
printf("Valor de R$60,00");
break;
case 14:
printf("Valor de R$60,00");
break;
case 15:
printf("Valor de R$60,00");
break;
case 16:
printf("Valor de R$60,00");
break;
case 17:
printf("Valor de R$60,00B");
break;
case 18:
printf("Valor de R$60,00");
break;
case 19:
printf("Valor de R$60,00");
break;
case 20:
printf("Valor de R$60,00");
break;
case 21:
printf("Valor de R$60,00");
break;
case 22:
printf("Valor de R$60,00");
break;
case 23:
printf("Valor de R$60,00");
break;
case 24:
printf("Valor de R$60,00B");
break;
case 25:
printf("Valor de R$60,00");
break;
case 26:
printf("Valor de R$60,00");
break;
case 27:
printf("Valor de R$60,00");
break;
case 28:
printf("Valor de R$60,00");
break;
case 29:
printf("Valor de R$60,00");
break;
case 30:
printf("Valor de R$120,00");
break;
case 31:
printf("Valor de R$120,00");
break;
case 32:
printf("Valor de R$120,00");
break;
case 33:
printf("Valor de R$120,00");
break;
case 34:
printf("Valor de R$120,00");
break;
case 35:
printf("Valor de R$120,00");
break;
case 36:
printf("Valor de R$120,00");
break;
case 37:
printf("Valor de R$120,00");
break;
case 38:
printf("Valor de R$120,00");
break;
case 39:
printf("Valor de R$120,00");
break;
case 40:
printf("Valor de R$120,00");
break;
case 41:
printf("Valor de R$120,00");
break;
case 42:
printf("Valor de R$120,00");
break;
case 43:
printf("Valor de R$120,00");
break;
case 44:
printf("Valor de R$120,00");
break;
case 45:
printf("Valor de R$120,00");
break;
case 46:
printf("Valor de R$150,00");
break;
case 47:
printf("Valor de R$150,00");
break;
case 48:
printf("Valor de R$150,00");
break;
case 49:
printf("Valor de R$150,00");
break;
case 50:
printf("Valor de R$150,00");
break;
case 51:
printf("Valor de R$150,00");
break;
case 52:
printf("Valor de R$150,00");
break;
case 53:
printf("Valor de R$150,00");
break;
case 54:
printf("Valor de R$150,00");
break;
case 55:
printf("Valor de R$150,00");
break;
case 56:
printf("Valor de R$150,00");
break;
case 57:
printf("Valor de R$150,00");
break;
case 58:
printf("Valor de R$150,00");
break;
case 59:
printf("Valor de R$150,00");
break;
case 60:
printf("Valor de R$250,00");
break;
case 61:
printf("Valor de R$250,00");
break;
case 62:
printf("Valor de R$250,00");
break;
case 63:
printf("Valor de R$250,00");
break;
case 64:
printf("Valor de R$250,00");
break;
case 65:
printf("Valor de R$250,00");
break;
default:
printf("Valor de R$400,00");
} 
return 0;
}
