#include<stdio.h>
int main(){

int valor1, valor2;

	printf("Digite valor1\n");
	scanf("%d", &valor1);

	printf("Digite valor2\n");
	scanf("%d", &valor2);

	if(valor1 % valor2 == 0 || valor2 % valor1 == 0){

		printf("são múltiplos\n");
	}else{
		printf("não são múltiplos\n");

	}	

return 0;
}
