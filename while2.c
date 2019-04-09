#include<stdio.h>
int main(){

int fatorial = 1, cont = 1, n;

printf("Digite um numero: ");
scanf("%d", &n);

while(cont <= n ){
    fatorial = fatorial * cont;
    cont = cont+1;

  
    
}
printf("fatorial: %d", fatorial);


    return 0;
}