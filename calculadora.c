#include <stdio.h>
#include <stdlib.h>

main(){
	
	float n1, n2, resultado;
	int op, continua;
	
	system("cls");
	printf("******* Sistema de calculo basico ********\n\n\n");
	
	printf("Informe o primeiro numero: ");
	scanf("%f", &n1);
	
	system("cls");
	printf("Informe o segundo numero: ");
	scanf("%f", &n2);
	
	system("cls");
	printf("escolha a operacao :\n ");	
	printf("| #1 + | #2 - | #3 * | #4 / | ");
	scanf("%d", &op);
	
	switch(op){
		case 1:
			resultado = n1 + n2;
			break;
		case 2:
			resultado = n1 - n2;
			break;
		case 3:
			resultado = n1 * n2;
			break;
		case 4:
			if(n2 == 0){
				system("cls");
				printf("Nao e possivel dividir por zero\n\n");
				system("pause");
			}
			resultado = n1 / n2;
			break;
		default:
			system("cls");
			printf("Opcao invalida\n\n");
			system("pause");
			
	}
	
	system("cls");
	printf("Resultado final e %.2f\n\n", resultado);
	
	printf("Deseja continuar usando o sistema? ( 1 = Sim)");
	scanf("%d", &continua);
	if(continua == 1){
		return main();
	}else{
		system("cls");
		printf("Obrigado por usar o sistema\n\n");
	}
	
	
	system("pause");
}
