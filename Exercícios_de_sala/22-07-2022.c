#include <stdio.h>

struct pessoa{
        char nome[20];
        int idade;
};

int main(){
    struct pessoa var1={"Adrian",19};
    printf("Digite seu nome: ");
    scanf("%s",var1.nome);
    printf("Digite sua idade: ");
    scanf("%d",var1.idade);
    printf("Nome:%s\nIdade:%d\n",var1.nome,var1.idade);
    return 0;
}
