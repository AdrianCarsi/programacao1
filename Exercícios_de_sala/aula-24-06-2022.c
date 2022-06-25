#include <stdio.h>

int main(){
int A, B, C, D;

printf("Digite um número para A,B,C,D:\n");
scanf("%d %d %d %d",&A,&B,&C,&D);
if(A==B+C+D && B+C==D && B==C){
    printf("Está equilibrado!\n");
}
    else{
printf("Não está equilibrado\n");
}
    return 0;
}

#include <stdio.h>

int main(){
int N, M, B;
printf("Número de bolinhas de chocolate:\n");
scanf("%d",&N);
printf("Número de bolinhas de chocolate que serão comidas por vez:\n");
scanf("%d",&M);
while(N>0){
    if(B==0){
        printf("Paula - ");
        B=1;
}
else{
    printf("Carlos - ");
    B=0;
 
}
N=N-M;
if(N<0){
    printf("0\n");
}
else{
printf("%d\n",N);
}
}
if(B==0)
printf("Carlos ganhou\n");
else
printf("Paula ganhou\n");





    return 0;
}
