#include<stdio.h>
int main(){

float x1, y1, z1;

	printf("Digite x1\n");
	scanf("%f", &x1);

	printf("Digite y1\n");
	scanf("%f", &y1);

	printf("Digite z1\n");
	scanf("%f", &z1);

		if(x1 >= y1 + z1 || y1 >= x1 + z1 || z1 >= y1 + x1){
			printf("Os valores lidos não formam um triangulo\n");
		}else{
			if(x1 * x1 == y1 * y1 + z1 * z1 || y1 * y1 == x1 * x1 + z1 * z1 || z1 * z1 == y1 * y1 + x1 * x1){
				printf("Triangulo retangulo\n");
			}
		}	




return 0;
}
