#include<stdio.h>
int main(){

float valor1, valor2, valor3, media;

	printf("Digite valor1\n"); 
	scanf("%f", &valor1);

	printf("Digite valor2\n"); 
	scanf("%f", &valor2);
	
	printf("Digite valor3\n"); 
	scanf("%f", &valor3);

		if(valor1 > valor2 && valor1 > valor3){
			media = ((valor1 * 5) + (valor2 * 2.5) + (valor3 * 2.5))/10; 
		}

		if(valor2 > valor1 && valor2 > valor3){
		media = ((valor2 * 5) + (valor1 * 2.5) + (valor3 * 2.5))/10; 
		}	
		
		if(valor3 > valor1 && valor3 > valor2){
			media = ((valor3 * 5) + (valor1 * 2.5) + (valor2 * 2.5))/10; 
		}

			printf("media é: %f", media);
return 0;
}
