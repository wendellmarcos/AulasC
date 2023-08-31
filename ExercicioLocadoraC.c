#include <stdio.h>

#define TAM_NOME_CLIENTE 100

struct cliente{
	char nome[TAM_NOME_CLIENTE];
	int idade;
};

int main(){
	struct cliente cliente1;
	int classificacao_filme;
	
	printf("\n Informe o nome do cliente: ");
	
	fflush(stdin);
	fgets(cliente1.nome, TAM_NOME_CLIENTE, stdin);
	
	printf("\n Informe a idade do cliente: ");
	scanf("%d", &cliente1.idade);
	
	printf("\n Informe a classificação do filme: ");
	scanf("%d", &classificacao_filme);
	
	printf("\n Cliente: %s", cliente1.nome);
	printf("\n Idade: %d anos", cliente1.idade);
	printf("\n Classificação do filme: %d anos", classificacao_filme);
	
	return 0;
}
