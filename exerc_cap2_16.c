16. A confederação brasileira de natação irá promover eliminatórias para o próximo
mundial. Faça um programa em C que receba a idade de um nadador e imprima
a sua categoria segundo a tabela a seguir:
Categoria Idade
Infantil A 5 - 7 anos
Infantil B 8 - 10 anos
Juvenil A 11 - 13 anos
Juvenil B 14 - 17 anos
Sênior maiores de 18 anos

//Em switch

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
printf("ERRO");
break;
case 1:
printf("ERRO");
break;
case 2:
printf("ERRO");
break;
case 3:
printf("ERRO");
break;
case 4:
printf("ERRO");
break;
case 5:
printf("Infantil A");
break;
case 6:
printf("Infantil A");
break;
case 7:
printf("Infantil A");
break;
case 8:
printf("Infantil B");
break;
case 9:
printf("Infantil B");
break;
case 10:
printf("Infantil B");
break;
case 11:
printf("Juvenil A");
break;
case 12:
printf("Juvenil A");
break;
case 13:
printf("Juvenil A");
break;
case 14:
printf("Juvenil B");
break;
case 15:
printf("Juvenil B");
break;
case 16:
printf("Juvenil B");
break;
case 17:
printf("Juvenil B");
break;
default:
printf("Sênior");
} 

return 0;
}


//Em if
#include <stdio.h>
int main(){
char nome;
int idade;

printf("Informe seu nome:\n");
scanf("%c", &nome);
printf("Informe sua idade:\n");
scanf("%i", &idade);

if(idade >= 5 && idade <= 7){
printf("Infantil A");
}
else if(idade >= 8 && idade <= 10){
printf("Infantil B");
}
else if(idade >= 11 && idade <= 13){
printf("Juvenil A");
}
else if(idade >= 14 && idade <= 17){
printf("Juvenil B");
}
else if(idade >= 18){
printf("Sênior");
}
else{
printf("ERROR");
}
return 0;
}
