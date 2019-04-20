#include<stdio.h>

int main(){

char categoria;
float salario, salarioNovo;

	

	printf("Digite a categoria\n");
	scanf("%c", &categoria);

	printf("Digite o Salario Atual\n");
	scanf("%f", &salario);


		if(categoria == 'A' || categoria == 'C' || categoria == 'F' || categoria == 'H'){
			salarioNovo = salario * 1.10;
		}	
		if(categoria == 'B' || categoria == 'D' || categoria == 'E' || categoria == 'G'){
		salarioNovo = salario * 1.15;
		}
		if(categoria == 'I' || categoria == 'K' || categoria == 'L' || categoria == 'M' || categoria == 'N' || categoria == 'O' || categoria == 'P' || categoria == 'Q' || categoria == 'R'){
		salarioNovo = salario * 1.20;
		}
		if(categoria == 'J' || categoria == 'S' || categoria == 'T' || categoria == 'U' || categoria == 'V' || categoria == 'W' || categoria == 'X' || categoria == 'Y' || categoria == 'Z'){
		salarioNovo = salario * 1.25;
		}


			printf("Novo Salario: %.22f\n",  salarioNovo);



return 0;
}
