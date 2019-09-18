#include <stdio.h>
#include <stdlib.h>

main(){
	
	float n1, n2;
	
	printf("Informe o primeiro numero: ");
	scanf("%f", &n1);
	
	system("cls");
	printf("Informe o segundo numero: ");
	scanf("%f", &n2);
	
	system("cls");
	printf("%.2f + %.2f = %.2f\n", n1, n2, n1+n2);
	printf("%.2f - %.2f = %.2f\n", n1, n2, n1-n2);
	printf("%.2f x %.2f = %.2f\n", n1, n2, n1*n2);
	printf("%.2f / %.2f = %.2f\n", n1, n2, n1/n2);
	
	
	system("pause");
}
