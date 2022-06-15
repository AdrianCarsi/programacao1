13. Faça um programa que permita entrar com o nome, a nota da prova 1 e a nota da
prova 2 de um aluno. O programa deve imprimir o nome, a nota da prova 1, a nota
da prova 2, a média das notas e uma das mensagens: "Aprovado", "Reprovado"ou
"em Prova Final"(a média é 7 para aprovação, menor que 3 para reprovação e as
demais em prova final).
  
  #include <stdio.h>
int main(){
char nome;
float p1, p2, pf;
printf("Informe teu nome:");
scanf("%s", &nome);
printf("Informe a nota da sua primeira prova:");
scanf("%f", &p1);
printf("Agora me informe a nota da sua segunda prova:");
scanf("%f", &p2);
pf=(p1+p2)/2;
if(pf >=7){
printf("%f está na media, então você está APROVADO\n",pf);
}
else if(pf <=3){
printf("%f não está na media, então você está REPROVADO\n",pf);
}
else {
printf("%f não está na média e nem abaixo, logo você terá que fazer a PROVA FINAL\n",pf);
}
return 0;
}
