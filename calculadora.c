#include <stdio.h>
#include <stdlib.h>

main(){
	
	float n1, n2, resultado;
	
	printf("Informe o primeiro numero: ");
	scanf("%f", &n1);
	
	system("cls");
	printf("Informe o segundo numero: ");
	scanf("%f", &n2);
	
	resultado = n1 + n2;
	
	system("cls");
	printf("%.2f + %.2f = %.2f\n\n", n1, n2, resultado);
	
	
	system("pause");
}
