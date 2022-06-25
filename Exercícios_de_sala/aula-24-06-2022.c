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

