#include <stdio.h>

struct pessoa{
    char nome[20];
    int idade;
};
typedef struct{
    char nome[20];
    int idade;
}tipopessoa;

float soma(float n1, float n2){
        float resultado;
        resultado=n1+n2;
        return resultado;
}

int main(){
        float n1,n2;
        n1=12.5;
        n2=10.0;
        soma(10,10);
        printf("%2.f\n",soma(10,10));
}

#include <stdio.h>

void fibo(int n){
    int n1=1, n2=1, p, i;
    if(n<1) return;
    printf("%d ",n1);
    for(i=0;i<n-1;i++){
        printf("%d ",n2);
        p=n1+n2;
        n1=n2;
        n2=p;
    }
    printf("\n");
}

int main()
{
int num;
printf("Digite um número: ");
scanf("%d",&num);
fibo(num);
}

#include <stdio.h>


    int fat(int n){
    int prod=1,i;
    if(n==0) 
    return 1;
    else if(n<0)
    return -1;
    for(i=n;i>0;i++){
        prod=prod*i;
    }
    return prod;
    }
  

int main(){
int num, prod;
printf("Digite um número: ");
scanf("%d",&num);
prod=fat(num);
printf("%d",prod);
} (mudar o final)
