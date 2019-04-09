#include<stdio.h>
int main(){

int num = 0, cont1 = 0, somapos = 0;

do
{printf("Digite um numero");
scanf("%d", &num);
    if (num < 0) {
       cont1 = cont1 + 1;
    }else{
        somapos = somapos + num;
    }
    
    
} while (num != 0);
printf("negativo = %d\n positivo = %d\n", cont1, somapos);









return 0;

}
