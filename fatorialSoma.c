#include<stdio.h>
int main(){


int soma = 0, fatorial = 1, num, contador = 0;
do
{
    do
    {
        printf("Digite um numero\n");
        scanf("%d", &num);
    } while (num <= 0 && num != -1);
    if (num > 0) {
        if (num < 7 ) {
            
            contador = 1, fatorial = 1; // tem que reinicializar as variáveis pois cont vale zero e fatorial na segunda volta terá lixo.
            
            while(contador <= num ){
                fatorial = fatorial * contador;
                contador++;
            }
           printf("%d\t != %d\t", num , fatorial);
        }
        
    }else{
        contador = 0;
        soma = 0;
        while(contador <= num){
            soma = soma + contador;
            contador++;
        }
        printf("soma %d", soma);
    }
    
    
} while (num != -1);

    return 0;
}