#include <stdio.h>
#include <locale.h>
#include <ctype.h>

int main(){
	setlocale ( LC_ALL, "Portuguese");
	int digito;
	
	printf("Digite o numero de 1 a 5 para mostrar seu departamento: ");
	scanf("%i", &digito);
	
	if(digito==1){
		printf("Seu departamento é o Finaceiro");
	}
	else if(digito==2){
		printf("Seu departamento é o Recursos Humanos");
	}
	else if(digito==3){
		printf("Seu departamento é o Estoque");
	}
	else if(digito==4){
		printf("Seu departamento é o Contas a Pagar");
	}
	else{
		printf("Seu departamento é o Logistica");
	}
	
	return 0;
}
