#include<stdio.h>
int main(){

int valor, resto, q100, q50, q20, q10, q5, q2, q1;

printf("Digite o Valor\n");
scanf("%d", &valor);
q100 = valor/100;
resto = valor % 100;
q50 = resto / 50;
resto = resto % 50;
q20 = resto / 20;
resto = resto % 20;
q10 = resto / 10;
resto = resto % 10;
q5 = resto / 5;
resto = resto %  5;
q2 = resto / 2;
resto / resto % 2;
q1 = resto;

printf("%d x 100\n %d x 50\n %d x 20\n %d x 10\n %d x 5\n %d x 2\n %d x 1\n", q100, q50, q20, q10, q5, q2, q1);




    return 0;
}