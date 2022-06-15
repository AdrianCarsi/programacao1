7. Faça um programa em C que leia um número e indique se o número está compre-
endido entre 20 e 50 ou não.
  
  #include <stdio.h>
int main(){
float NUM;
printf("Informe um número contido no intervalo [20,50]:");
scanf("%f", &NUM);
if(NUM >=20 && NUM<=50)  {
printf("%f está no instervalo entre 20 e 50\n",NUM);
}
else {
printf("%f não está no instervalo entre 20 e 50\n",NUM);
}
return 0;
}
