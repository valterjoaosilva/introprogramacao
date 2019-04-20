#include<stdio.h>
int main(){

int a, b, c, cont = 0, divisor, contzero;


    printf("digite a");
    scanf("%d", &a);

    printf("Digite b");
    scanf("%d", &b);
    
    if (a < b) {
        c = a; 
        a = b; 
        b = c;
    }
    cont = a; 
    while(cont >= b){
        divisor = 1;

        while(divisor <= cont){
            if (cont % divisor = 0) {
                contzero++
                divisor++
            }
            if (contzero == 2) {
                printf("%d", cont)

            }
            
        }
        cont--
    }
    
    
        
   
    










    return 0;
}