#include<stdio.h>
int main(){

int codigo, quantidade;
float preco, totPedido;

	printf("Insira o código do produto\n");
	scanf("%d", &codigo);
	
	if(codigo != 100 || codigo != 101 || codigo != 102 || codigo != 103){
		printf("Código incorreto\n");
	}

		if(codigo == 100){
			printf("Informe a quantidade\n");
			scanf("%d", &quantidade);
				if(quantidade == 5){
					totPedido = 4 * 3.00;
				}else{
					(totPedido = quantidade * 3.00);
				}
		
		}
		
		if(codigo == 101){
			printf("Informe a quantidade\n");
			scanf("%d", &quantidade);
				if(quantidade == 5){
					totPedido = 4 * 2.50;
				}else{
					(totPedido = quantidade * 2.50);
				}
		}
		
		if(codigo == 102){
			printf("Informe a quantidade\n");
			scanf("%d", &quantidade);
				if(quantidade == 5){
					totPedido = 4 * 2.00;
				}else{
					(totPedido = quantidade * 2.00);
				}
		}
		
		if(codigo == 103){
			printf("Informe a quantidade\n");
			scanf("%d", &quantidade);
				if(quantidade == 5){
					totPedido = 4 * 2.25;
				}else{
					(totPedido = quantidade * 2.25);
				}
		}
			

				
				printf("Total a pagar: %f\n", totPedido);

				return 0;
			}
		


