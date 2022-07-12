Questão 1:
a) 
Valor de i: 2
Valor de i: 3
Valor de i: 4
Agora, a variável i possui o valor: 5

b) 0,1,2,3 e 4.

c) 5, pois o laço de repetição possui intervalo de 0 até 4 no printf “O valor de i:”. 1, pois o laço se encerra no primeiro valor maior que 4 finalizando esta parte do código.

d) Não, pois o código pode ser escrito em apenas uma linha  e, além disso, ao fechar as chaves no for o segundo printf apenas irá adicionar “poluição visual” na tela do usuário já repetindo informações subentendidas.

2)
O erro é o ‘const’ sendo declarado numa variável.
 #include <stdio.h>
int main ()
{
int i;
for (i=0 ; i<5 ; i++)
printf(“Valor de i: %d\n”, i);
}

3) a)Digitar um número e imprimir seu valor na tela até que ele seja menor que 2  maior que 80 usando printf e scanf, respectivamente.
b) Uma vez.
c) Quando for menor que 2 e maior que 80.
d) Não consegui.

4) a) constante, num, num2 e nome.
b) Dois operadores lógicos, ! e | |. A expressão aritmética é uma, num+10
c) São três, num<2, num>80 e num == constante
d)Não ocorre nada, pois não está sendo usada no código.
e) Se for tirada apenas a variável fora, o código não roda.
f) Digite seu nome: Nome
Digite um número: 1
Nome digitado: Nome
Número digitado somado com 10: 11
Número digitado igual a constante 1: 1
(1 significa verdadeiro e 0 significa falso)

5)
Sim, pois na linguagem C não há restrição para o caractere . Só daria errado se apenas uma valor1 fosse mudado e os outros não.
Não, pois na linguagem C existe uma restrição onde uma variável não pode começar com número.  
c) Não, pois na linguagem C existe uma restrição onde uma variável não pode ter espaço na variável
d) cont é usado para aumentar a variável cont de uma em uma unidade
e) soma é usada para somar o valor i com o valor da soma
f) valor_1: 34
cont: 0
soma: 0
----------------
valor_1: 34
cont: 1
soma: 0
----------------
valor_1: 35
cont: 2
soma: 1
----------------
valor_1: 37
cont: 3
soma: 3
----------------
valor_1: 40
cont: 4
soma: 6
----------------


Valor de valor_1: 44
Valor de cont: 5
Valor de soma: 10

g)  A variável tem o valor final como 44 devido ao acréscimo obtido durante o codigo  no valor numérico da variável cont que é uma repetição aumentando de 1 em 1 unidade e a soma do valor numérico da variável soma, a qual aumenta de acordo com o valor do cont. Como a variável valor1 começa com 34, assim que o laço de repetição se encerra o valor é de 44.

h) Se estiver dentro do for, fará parte do laço de repetição até satisfazer a condicional. Caso não, a instrução não fará parte do loop, ocorrendo apenas uma vez.

6) a) A falta da declaração do num++; abaixo do printf("valor do numero: %d\n", num); gerando um loop infinito.
b) Logico.
Um loop infinito.
#include <stdio.h>
int main()
{
    int num;
    num = 0;
    while (num < 10) {
        printf("valor do numero: %d\n", num);
        num++;
    }
    printf("Saindo...\n");
}

7)
O programa é imparcial e discordo do que está dizendo pois acho meu nome lindo. Brincadeira à parte, o programa imprime que o nome é bonito se, e somente se, começar com J.
Insinua que apenas nomes que começam com J são bonitos, o que pode ser vinculado com o fato do nome do desenvolvedor ser Jacson. Brincadeira à parte, o programa foi desenvolvido com o intuito de declarar apenas nomes bonitos  os que começam com J, o qual é justamente a inicial do nome do desenvolvedor.

Porque possui um único case, já que o segundo case é igual o primeiro.

