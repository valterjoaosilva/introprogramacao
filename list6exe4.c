#include<stdio.h>
int main(){

float medicao;

	printf("Digite a medição\n");
	scanf("%f", &medicao);

	if(medicao < 0.29){
		printf("indice normal\n");
	}else{
		
		if(medicao >= 0.30 && medicao < 0.40){
			printf("Chamar industrias da lista A\n");
		}else{
			if(medicao >= 0.40 && medicao < 0.50){
				printf("Chamar industrias da lista A e lista B\n");
			}else{
				if(medicao >= 0.50){
					printf("Chamar industria das listas A, B e C\n");
				}
			}
		}
	}





return 0;
}
