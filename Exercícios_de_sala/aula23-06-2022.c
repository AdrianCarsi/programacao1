#include <stdio.h>
int main(){
    int i;
for(i=0;i<10;i++){
    printf("Oi mundo\n",i);
}
return 0;
}


#include <stdio.h>
int main(){
int i;
for(i=0;i<=40;i+=3){
    printf("Os divisores pedidos são:%d\n",i);
}

    return 0;
}

#include <stdio.h>
int main(){
    int i;
    i=0;
while(i<=40){
printf("Os divisores são:%d\n",i);
i+=3;
    
}
    return 0;
}

#include <stdio.h>
int main(){
int i;
printf("Os divisores são:");
i=0;
do{
if(i % 3 == 0)
printf("%d\n",i);
i+=2;
}
while(i<=10);

    return 0;
}


#include <stdio.h>
int main(){
 char opcao = 'z';
 do {  
printf("Escolha uma opção\n");
printf(" a) 10\n");
printf(" b) 20\n");
printf(" c) 30\n");
scanf("%c", &opcao);
}
while(opcao != 'a' && opcao != 'b' && opcao != 'c');
printf("Tua opção é: %c\n",opcao);
 
    return 0;
}
