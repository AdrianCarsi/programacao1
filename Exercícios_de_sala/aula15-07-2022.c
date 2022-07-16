#include <stdio.h>
int main() {
 float notas[6][8], media[6], soma, maior=media[0];
 int idx;
 char nomes[6][20];
 int i, j;
 
 for (i=0;i<6;i++) {
 printf("Digite o nome do aluno %d: ", i);
 scanf("%s", nomes[i]);
 }
 for (i=0;i<6;i++)
 for (j=0;j<8;j++) {
 printf("Digite a nota do aluno %s na disciplina %d: ", nomes[i], j);
 scanf("%f", &notas[i][j]);
 }
 for (i=0;i<6;i++) {
 soma = 0;
 for (j=0;j<8;j++) {
 soma += notas[i][j];
 }
 media[i] = soma/8;
 }
 soma = 0;
 for (i=0;i<6;i++)
 soma += media[i];
 for (i=0;i<6;i++)
 printf("Média do aluno %d - %s: %.2f\n",
 i, nomes[i], media[i]);
 printf("Média do melhor grupo da UFES: %.2f\n", soma/6);
 
 maior = media[0];
 idx = 0;
 for (i=0;i<6;i++)
     if(media[i]>maior){
         maior=media[i];
         idx=i;
     }

 printf("%s",nomes[idx]);
    return 0;
}
