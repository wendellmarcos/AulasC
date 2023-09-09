#include <stdio.h>
#include <stdlib.h>

float Vin = 0.0,
	Vled=0.0,
	Iled = 0.0,
	R = 0.0;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	printf(" LED CALC   v1.0");
	printf(" Autor: Eng. Wendell Marcos \n\n");
	
	printf("\n Digite o valor de Vin (em Volts): ");
	scanf("%f", &Vin);
	printf("\n\n");
	
	printf("\n Digite o valor de Vled (em Volts): ");
	scanf("%f", &Vled);
	printf("\n\n");
	
	printf("\n Digite o valor de Iled (em Amperes): ");
	scanf("%f", &Iled);
	printf("\n\n");
	
		
	
	printf("Vin = %.2f\n\n", Vin);
	printf("Vled = %.2f\n\n", Vled);
	printf("Iled = %.2f\n\n", Iled);
	
	R = (Vin-Vled) / Iled;
	printf("\n O valor resistor para o LED tem o valor de %.2f Ohms \n\n", R);
	

	
	
	system("PAUSE");
	return 0;
}
