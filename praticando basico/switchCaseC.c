#include <stdio.h>

int main(){
	
	
	int opcao;
	
	
	printf("\n Digite 1-Saldo\n 2-Extrato\n 3-Saque\n 4-Sair");
	
	printf("\n Informe a opcçao desejada: ");
	
	scanf("%d", &opcao);
	
	switch (opcao){
		
		case 1:
			printf("\n Saldo");
			break;
			
		case 2: 
			printf("\n Extrato! ");
			break;	
		
		case 3:
			printf("\n Saque!");
			break;
	
		case 4:
			printf("\nSair");
			break;
			
		default:
			printf("\nOpcao invalida!");
			
	}
	
	return 0;
}
