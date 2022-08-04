#include <stdio.h>
#include <stdlib.h>

int main()
{
   int *p;
   printf("Estou apontando para %p\n",p);
   p=malloc(sizeof(int));
   printf("Estou apontando para %p\n",p);
   *p=10;
   printf("Valor de *p:%d\n",*p);
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
   int *n1, *n2, *soma;
   n1=malloc(sizeof(int));
   n2=malloc(sizeof(int));
   soma=malloc(sizeof(int));
   printf("Digite n1: ");
   scanf("%d",n1);
  printf("Digite n2: ");
   scanf("%d",n2);
   *soma=*n1 + *n2;
   printf("A soma é: %d\n ",*soma);
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
   int *p;
   printf("Estou apontando para %p\n",p);
   p=malloc(sizeof(int)*3);
   printf("Estou apontando para %p\n",p);
   scanf("%d",&p[0]);
   printf("Valor de *p:%d\n",p[0]);
   
   
  
}


#include <stdio.h>
#include <stdlib.h>

int main()
{
   int vet[3], i, soma=0;
   for(i=0; i<3; i++){
       printf("Digite o valor:");
       scanf("%d",&vet[i]);
   }
   for(i=0;i<3;i++){
       soma=soma+vet[i];
   }
   printf("média: %d\n",soma/3);
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
   int *vet, i, soma=0;
   vet=malloc(3*sizeof(int));
   for(i=0; i<3; i++){
       printf("Digite o valor:");
       scanf("%d",&vet[i]);
   }
   for(i=0;i<3;i++){
       soma=soma+vet[i];
   }
   printf("média: %d\n",soma/3);
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
   int *vet, i, *soma;
   soma=malloc(sizeof(int));
   *soma=0;
   vet=malloc(3*sizeof(int));
   for(i=0; i<3; i++){
       printf("Digite o valor:");
       scanf("%d",&vet[i]);
   }
   for(i=0;i<3;i++){
       *soma=*soma+vet[i];
   }
   printf("média: %d\n",*soma/3);
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
   int *vet, *i, *soma;
   i=malloc(sizeof(int));
   soma=malloc(sizeof(int));
   *soma=0;
   vet=malloc(3*sizeof(int));
   for(*i=0; *i<3; (*i)++){
       printf("Digite o valor:");
      scanf("%d",&vet[*i]);
   }
   for(*i=0;*i<3;(*i)++){
       *soma=*soma+vet[*i];
   }
   printf("média: %d\n",*soma/3);
}

#include <stdio.h>
#include <stdlib.h>

float media_notas(int n){
      float *notas, media;
      int i;
      notas=malloc(n*sizeof(float));
      for(i=0;i<n;i++){
        printf("Aluno %d: ",i);
        scanf("%f",&notas[i]);
      }
      media= 1.;
      for(i=0;i<n;i++)
         media+=notas[i];
         
       return media/n;
 }

int main()
{
  
  float m;
  m=media_notas(3);
  printf("média: %.2f\n",m);
  
}
