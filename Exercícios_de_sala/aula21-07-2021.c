#include <stdio.h>

int main()
{
    int mat[10][10], linha, coluna;
    for(linha=0;linha<10;linha++){
        for(coluna=0;coluna<10;coluna++){
            mat[linha][coluna]=rand()%1000;
        }
    }
            for(linha=0;linha<10;linha++){
                for(coluna=0;coluna<10;coluna++){
                printf("%d ",mat[linha][coluna]);
                }
             printf("\n");   
            }
    return 0;
}

#include <stdio.h>

void qualquer_um(int p){
    printf("Oi mundo: %d\n",p);
}

int main(){
    qualquer_um(93);
    qualquer_um(93);
    qualquer_um(93);
}
  
