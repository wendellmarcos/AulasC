#include <stdio.h>
#include <stdlib.h>

int main(){
	int idade = 18;
	float salario= 1250.75;
	double porcentagem_desconto = 2.5;
	char genero = 'F';
	float altura = 1.63;
	
	
	printf("\n Idade: %d", idade);
	printf("\n Salario: %f", salario);
	printf("\n Desconto (%): %f", porcentagem_desconto);
	printf("\n Genero: %c", genero);
	printf("\n Altura: %.3f", altura);
	
	system("pause");
	
	return 0;

	
	
}
