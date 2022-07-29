#include <stdio.h>

void teste(int num){
    printf("F:%p\n",&num);
    num=10;
}

int main()
{
    int num=7;
    printf("%p\n", &num);
  teste(num);
  printf("%d\n",num);
  
    return 0;
}

#include <stdio.h>

void teste(int *num){
    printf("E:%p\n",&num);
    printf("F:%p\n",num);
}

int main()
{
    int num=7;
    printf("%p\n", &num);
  teste(&num);
  printf("%d\n",num);
  
    return 0;
}

