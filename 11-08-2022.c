#include <stdio.h>

void esc_num(int num){
    printf("número: %d\n", num);
    if(num>0)
    esc_num(num-1);
}

int main()
{
    printf("Hello World");

esc_num(10);

    return 0;
}


int  p_impar(int vet[5],int pos){
if(pos>=0 && pos<5){
    if(vet[pos]%2==1){
        return 1;
    
    }else {
        return 0;
    }
    else{ 
        return 0;
}
    
    




#include <stdio.h>

int main()
{
 int v[5]={2,4,1,7},resp;
 resp+p_impar(v,0);
 printf("Resp:%s\n",(resp==1)?"sim":"nao");
 
    return 0;
}