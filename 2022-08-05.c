#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 typedef struct {
      float peso , altura;
  } tipoIMC;
  

int main()
{
  
 tipoIMC * imc;
 imc=malloc(sizeof(tipoIMC));
 imc->peso=79.0;
 printf("%f\n",imc->peso);
 printf("Digite seu peso em Kg (apenas valor númerico): ");
 scanf("%f",&imc->peso);
  printf("Digite sua altura em metros (apenas valor númerico): ");
 scanf("%f",&imc->altura);
 printf("Seu IMC: %f", imc->peso/pow(imc->altura,2));
 
    return 0;
}


#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 typedef struct {
      float peso , altura;
 } tipoIMC;
 
 void calc_imc(tipoIMC imc){
      float resultado;
      resultado= imc.peso/pow(imc.altura,2);
      printf("%f\n",resultado);
 }

int main()
{
  
 tipoIMC * imc;
 imc=malloc(sizeof(tipoIMC));
 imc->peso=79.0;
 printf("%f\n",imc->peso);
 printf("Digite seu peso em Kg (apenas valor númerico): ");
 scanf("%f",&imc->peso);
  printf("Digite sua altura em metros (apenas valor númerico): ");
 scanf("%f",&imc->altura);
calc_imc(*imc);

 
    return 0;
}

corregir o codigo abaixo

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 typedef struct {
      float peso , altura;
 } tipoIMC;
 
 float calc_imc(tipoIMC imc){
      float resultado;
      resultado= imc.peso/pow(imc.altura,2);
      return resultado;
 }

int main()
{
  
 tipoIMC *imc;
 float r;
 imc=malloc(sizeof(tipoIMC));
 printf("Digite seu peso em Kg (apenas valor númerico): ");
 scanf("%f",&imc->peso);
  printf("Digite sua altura em metros (apenas valor númerico): ");
 scanf("%f",&imc->altura);
 
  r=calc_imc(imc);
  printf("%f\n",r);

 
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 
 float soma(float *v, int tam){
 int i; float r=0;
 for(i=0;i<tam;i++)
     r+=v[i];
     return r;
 }
 
 
int main()
{
  
 float vet[10];
 int i;
 for(i=0;i<10;i++)
 vet[i]=i*i+3;
 printf("%f\n", soma(vet,10));
 
 
    return 0;
}
