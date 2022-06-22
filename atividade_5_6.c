#include <stdio.h>
#include <stdlib.h>
int main(){
    
int i, A=1, B=1, AB;

printf("%d\n", A);
printf("%d\n", B);

for(i=2; i<20; i++) {
    AB=B;
    B=A+B;
    printf("%d\n", B);
    A=AB;
}

    return 0;
}
