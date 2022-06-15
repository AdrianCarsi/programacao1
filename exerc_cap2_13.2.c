13. Faça um programa que permita entrar com o nome, a nota da prova 1 e a nota da
prova 2 de um aluno. O programa deve imprimir o nome, a nota da prova 1, a nota
da prova 2, a média das notas e uma das mensagens: "Aprovado", "Reprovado"ou
"em Prova Final"(a média é 7 para aprovação, menor que 3 para reprovação e as
demais em prova final). (com switch)
  
  
  //consegui resolver
  #include <stdio.h>
int main(){
char nome;
int p1, p2, pf;
printf("Informe teu nome:");
scanf("%c", &nome);
printf("Informe a nota da sua primeira prova:");
scanf("%i", &p1);
printf("Agora me informe a nota da sua segunda prova:");
scanf("%i", &p2);
pf=(p1+p2)/2;
switch (pf) {
case 0:
printf("REPROVADO");
break;
case 1:
printf("REPROVADO");
break;
case 2:
printf("REPROVADO");
break;
case 3:
printf("REPROVADO");
break;
case 4:
printf("PROVA FINAL");
break;
case 5:
printf("PROVA FINAL");
break;
case 6:
printf("PROVA FINAL");
break;
case 7:
printf("APROVADO");
break;
case 8:
printf("APROVADO");
break;
case 9:
printf("APROVADO");
break;
case 10:
printf("APROVADO");
break;
default:
printf("COMANDO NÃO RECONHECIDO, TENTE NOVAMENTE COM NÚMEROS INTEIROS");
} 
return 0;
}
  
  
  //Tentativa que deu errado informando p1 e p2
#include <stdio.h>
int main(){
char nome;
int p1, p2, pf;
printf("Informe teu nome:");
scanf("%c", &nome);
printf("Informe a nota da sua primeira prova:");
scanf("%f", &p1);
printf("Agora me informe a nota da sua segunda prova:");
scanf("%f", &p2);
pf=(p1+p2)/2;
switch (pf) {
case '0':
printf("REPROVADO");
break;
case '1':
printf("REPROVADO");
break;
case '2':
printf("REPROVADO");
break;
case '3':
printf("REPROVADO");
break;
case '4':
printf("PROVA FINAL");
break;
case '5':
printf("PROVA FINAL");
break;
case '6':
printf("PROVA FINAL");
break;
case '7':
printf("APROVADO");
break;
case '8':
printf("APROVADO");
break;
case '9':
printf("APROVADO");
break;
case '10':
printf("APROVADO");
break;
default:
printf("COMANDO NÃO RECONHECIDO, TENTE NOVAMENTE COM NÚMEROS INTEIROS");
} 
return 0;
}


//Tentativa 2 sem informar p1 e nem p2

#include <stdio.h>
int main(){
char nome;
int pf;
printf("Informe teu nome:");
scanf("%c", &nome);
printf("Informe a nota final:");
scanf("%i", &pf);
switch (pf) {
case 0:
printf("REPROVADO");
break;
case 1:
printf("REPROVADO");
break;
case 2:
printf("REPROVADO");
break;
case 3:
printf("REPROVADO");
break;
case 4:
printf("PROVA FINAL");
break;
case 5:
printf("PROVA FINAL");
break;
case 6:
printf("PROVA FINAL");
break;
case 7:
printf("APROVADO");
break;
case 8:
printf("APROVADO");
break;
case 9:
printf("APROVADO");
break;
case 10:
printf("APROVADO");
break;
default:
printf("COMANDO NÃO RECONHECIDO, TENTE NOVAMENTE COM NÚMEROS INTEIROS");
}
return 0;
}
