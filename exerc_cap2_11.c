11. Faça um programa que leia 3 números e imprima o maior deles.
  
  #include <stdio.h>
int main()
{
float n1, n2, n3;
printf("Informe um número\n:");
scanf("%f", &n1);
printf("Informe outro número\n:");
scanf("%f", &n2);
printf("Informe mais um número\n:");
scanf("%f", &n3);
if(n1 > n2 && n2 > n3) {
    printf("O primeiro número escolhido é o maior",n1);
}
else if(n1 > n2 && n3 > n2 && n1 > n3) {
printf("O primeiro número escolhido é o maior",n1);
}
else if(n1 > n3 && n2 > n3 && n1 > n2) {
printf("O primeiro número escolhido é o maior",n1);
}
else if(n1 > n3 && n3 > n2 && n1 > n3) {
printf("O primeiro número escolhido é o maior",n1);
}
else if(n2 > n1 && n3 > n1 && n2 > n3) {
printf("O segundo número escolhido é o maior",n2);
}
else if(n2 > n1 && n1 > n3 && n2 > n1) {
printf("O segundo número escolhido é o maior",n2);
}
else if(n2 > n3 && n3 > n1 && n2 > n3) {
printf("O segundo número escolhido é o maior",n2);
}
else if(n2 > n3 && n1 > n3 && n2 > n1) {
printf("O segundo número escolhido é o maior",n2);
}
else if(n3 > n1 && n1 > n2 && n3 > n1) {
printf("O terceiro número escolhido é o maior",n3);
}
else if(n3 > n1 && n2 > n1 && n3 > n2) {
printf("O terceiro número escolhido é o maior",n3);
}
else if(n3 > n2 && n1 > n2 && n3 > n1) {
printf("O terceiro número escolhido é o maior",n3);
}
else if(n3 > n2 && n2 > n1 && n3 > n2) {
printf("O terceiro número escolhido é o maior",n3);
}
else{
printf("Este caso não esta listado");
}
return 0;
}

//OU TAMBÉM PODEMOS FAZER:

#include <stdio.h>
int main()
{
float n1, n2, n3;
printf("Informe um número\n:");
scanf("%f", &n1);
printf("Informe outro número\n:");
scanf("%f", &n2);
printf("Informe mais um número\n:");
scanf("%f", &n3);
if(n1 > n2 && n2 > n3) {
    printf("%f é o maior",n1);
}
else if(n1 > n2 && n3 > n2 && n1 > n3) {
printf("%f é o maior",n1);
}
else if(n1 > n3 && n2 > n3 && n1 > n2) {
printf("%f é o maior",n1);
}
else if(n1 > n3 && n3 > n2 && n1 > n3) {
printf("%f é o maior",n1);
}
else if(n2 > n1 && n3 > n1 && n2 > n3) {
printf("%f é o maior",n2);
}
else if(n2 > n1 && n1 > n3 && n2 > n1) {
printf("%f é o maior",n2);
}
else if(n2 > n3 && n3 > n1 && n2 > n3) {
printf("%f é o maior",n2);
}
else if(n2 > n3 && n1 > n3 && n2 > n1) {
printf("%f é o maior",n2);
}
else if(n3 > n1 && n1 > n2 && n3 > n1) {
printf("%f é o maior",n3);
}
else if(n3 > n1 && n2 > n1 && n3 > n2) {
printf("%f",n3);
}
else if(n3 > n2 && n1 > n2 && n3 > n1) {
printf("%f",n3);
}
else if(n3 > n2 && n2 > n1 && n3 > n2) {
printf("%f",n3);
}
else{
printf("Este caso não esta listado");
}
return 0;
}
