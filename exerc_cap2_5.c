5. int main(){

int NUM;
printf("Escolha um número divisivel por 3 e 7: ");
scanf("%i", &NUM);
if((NUM % 3 == 0) && (NUM % 7 == 0)) {
printf("%i é divisível por 3 e 7 simuntaneamente.\n", NUM);
} else {
printf("%i não é divisível por 3 e 7 simuntaneamente.\n", NUM);
}
return 0;
}
