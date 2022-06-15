6. A prefeitura do Rio de Janeiro abriu uma linha de crédito para os funcionários
estatutários. O valor máximo da prestação não poderá ultrapassar 30% do salário
bruto. Faça um programa em linguagem C que permita entrar com o salário bruto
e o valor da prestação e informar se o empréstimo pode ou não ser concedido.
  
#include <stdio.h>
int main(){
float S, P, SP1, SP2;
printf("Informe seu salário bruto:");
scanf("%f", &S);
printf("Informe a prestação solicitada:");
scanf("%f", &P);
SP1= S+P;
SP2= S+((30*S)/100);
if((SP1 <= SP2))  {
printf("%f Translação autorizada\n",SP1);
}
else {
printf("%f Translação não autorizada\n",SP1);
}
return 0;
}
