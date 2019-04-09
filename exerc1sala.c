#include<stdio.h>
int main(){

int num, cont1 = 0, cont2 = 0, cont3 = 0, cont4 = 0;

do
{
  printf("Digite um numero");
  scanf("%d", &num);

    if (num >= 0 && num <=25) {
        cont1 = cont1 +1;

    }else
    {
     if(num >= 26 && num <=50){
         cont2 = cont2 +1;
     }else
     {
         if (num > 50 && num < 76) {
             cont3 = cont3 + 1;
         }else if(num >= 76 && <=100){
             cont4 = cont4 +1;
         }
         
         
         
             
         }
         
         
     }
     
    }
    
    
} while (num >=0);
printf("[0,25] =  %d\n [26,50]=%d\n [51,75]=%d\n [76,100]%d", cant1, cont2, cont3, cont4);




    return 0;
}