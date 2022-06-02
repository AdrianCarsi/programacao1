# programacao1

(ainda estou fazendo)

//Matricula: 2021101661. gcc aula-2022-05-27.c -o aula.e 

//Inicio da atividade

int main(int argc, char** argv) {
   
   float seg ter ter2 qua qua2 qui sex sex2 TOTAL;
   
   printf("Informe o deposito da segunda feira");
   scanf("%f",&seg);
   
   printf("Informe o deposito da terça feira");
   scanf("%f",&ter);
   printf("Informe o saldo retirado da terça feira");
   scanf("%f",&ter2);
   
    printf("Informe o deposito da quarta feira");
   scanf("%f",&qua);
   printf("Informe o saldo retirado da quarta feira");
   scanf("%f",&qua2);
   
   printf("Informe o deposito da quinta feira");
   scanf("%f",&qui);
   
   printf("Informe o deposito da sexta feira");
   scanf("%f",&sex);
   printf("Informe o saldo retirado da sexta feira");
   scanf("%f",&sex2);
   
   TOTAL= seg+ter-ter2+qua-qua2+qui+sex-sex2;
   
   printf("Este é teu saldo arrecadado está semana:%f",TOTAL);
   
    if(TOTAL=>2000) {
        printf("Este é teu saldo arrecadado está semana:%f",TOTAL\n");
    } 
   
   else(TOTAL<=500) {
        printf("Este é teu saldo arrecadado está semana:%f",TOTAL\n");
    } 
   
   else if(TOTAL) {
        printf("Este é teu saldo arrecadado está semana:%f",TOTAL\n");
    } 
