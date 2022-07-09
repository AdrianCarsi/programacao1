int main(){
float nota[5];
int i;
for (i=0;i<5;i++) {
printf("Digite a nota do aluno %d: ", i);
scanf("%f", &nota[i]);
}
for (i=0;i<5;i++) {
printf("Nota do aluno %d: %f\n", i, nota[i]);
}
}

                                               /////////////////////////////////////////
           
           1. Complete com o código correto para imprimir o número 50 na tela:

int main(){
     int meusNumeros[] = {25, 50, 75, 100};
     printf("%d", 
meusNumeros[1]
);
}

2. Crie um vetor (array) do tipo int chamado meuVetor:

int 
meuVetor
[]
 
=
 {25, 50, 75, 100};

3. Modifique o valor do primeiro elemento do vetor para 33:

int vetor[] = {25, 50, 75, 100};
vetor[0]
 
=
 
33
 ;
4. Faça um loop pelos elementos do vetor usando um for:

int meusNumeros[] = {25, 50, 75, 100};
int i;
for
 (i = 0; i < 4; i++) {
printf("%d\n", 
meusNumeros
[i]
);
}
5. Faça corretamente a leitura do vetor notas

int main()
{
     float notas[3];
     int i;

     //lendo todas as notas:
     for (i=
0
 ; i<
3
 ; 
i++
)
     {
          printf("Digite a nota número 
%d
: ", 
i
);
          scanf("%f", 
&
notas
[
i
]);
     }

     printf("\nValores lidos:\n");
     i=
0
;
     while(i<
3
)
     {
          printf("Nota[
%d
] = 
%f
\n", 
i
, 
notas[i]
);
          i++;
     }
}     


                                           //////////////////////////
                              #include <stdio.h>

int main(){
int VET[5],i;
printf("[");
for(i=0;i<5;i++){
    VET[i]=2*i;
    printf("%d ",VET[i]);
}
printf("]");
    return 0;
}

                                   
                                  
                                  ///////////////////////////////////////////////
                                  
                                  #include <stdio.h>

int main(){
int VET[30],n;
printf("[");
for(n=1;n<30;n++){
    VET[n]=n+1;
    printf("%d ",VET[n]);
}
printf("]");
    return 0;
}
   
#include <stdio.h>

int main(){
int VET[20],n;
printf("[");
for(n=0;n<20;n++){
    VET[n]=2*n;
    printf("%d ",VET[n]);
}
printf("]");
    return 0;
}
