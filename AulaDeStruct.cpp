#include <stdio.h>

struct automovel{
	
	char modelo[20];
	int ano;
	float valor;
};

int main(){
	struct automovel dadosAutomovel1;
	
	printf("Digite o ano do automovel: ");
	scanf("%f", &dadosAutomovel1.ano);
	
	printf("Digite o modelo do automovel: ");
	scanf("%f", &dadosAutomovel1.modelo);
	
	printf("Digite o valor do automovel: ");
	scanf("%f", &dadosAutomovel1.valor);
	
	
	printf("\n %s", dadosAutomovel1.ano);
	printf("\n %d", dadosAutomovel1.modelo);
	printf("\n %f", dadosAutomovel1.valor);
}
