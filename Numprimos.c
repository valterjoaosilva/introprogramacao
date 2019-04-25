#include<stdio.h>
int main(){

int a, b, c, nump = 0, cont, div;

printf("Digita o número a");
scanf("%d", &a);

printf("Digite o número b");
scanf("%d", &b);

if (a < b) {
        c = a; 
        a = b; 
        b = c;
    }
    while(a >= b){
       cont= 0;
       div = 1;
       
        while(cont <= b){
            if (b % cont == 0) {
                nump = nump + 1;
            }
            cont++;
        }
        if (nump == 2) {
            printf("%d", nump);
        }
        b = b + 1;
        cont = 0;
        nump =0;        
    }
    
    return 0;
}