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

#include <stdio.h>

typedef struct {
        char nome[20];
        int idade;
}pessoa;

int main(){
    pessoa var1={"Adrian",19};
    printf("Digite seu nome: ");
    scanf("%s",var1.nome);
    printf("Digite sua idade: ");
    scanf("%d",var1.idade);
    printf("Nome:%s\nIdade:%d\n",var1.nome,var1.idade);
    return 0;
}

#include <stdio.h>

typedef struct {
        char nome[20];
        int idade;
        float nota;
}tipo_aluno;

int main(){
    tipo_aluno aluno;
    printf("Digite seu nome: ");
    scanf("%s",aluno.nome);
    printf("Digite sua idade: ");
    scanf("%d",&aluno.idade);
    printf("Digite sua notinha: ");
    scanf("%f",&aluno.nota);
    printf("Nome:%s\nIdade:%d\nNota:%2.f\n",aluno.nome,aluno.idade,aluno.nota);
    return 0;
}

#include <stdio.h>

typedef struct {
        char nome[20];
        int idade;
        float nota;
}tipo_aluno;

int main(){
    tipo_aluno aluno[3];
    printf("Digite seu nome: ");
    scanf("%s",aluno[0].nome);
    printf("Digite sua idade: ");
    scanf("%d",&aluno[0].idade);
    printf("Digite sua notinha: ");
    scanf("%f",&aluno[0].nota);
    printf("Nome:%s\nIdade:%d\nNota:%2.f\n",aluno[0].nome,aluno[0].idade,aluno[0].nota);
    return 0;
}
