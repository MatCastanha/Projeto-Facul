#include <stdio.h>
#include <locale.h>

int main(){
	setlocale (LC_ALL, "Portuguese");
	
	//VARIAVEL
	int senha;
	
	//COLETA DE INFORMAÇÃO
	printf("Digite a senha para ter acesso: ");
	scanf("%i", &senha);
	
	//COMPARAÇÃO
	if(senha==4531){
		printf("Acesso Liberado");
	}
	else{
		printf("Acesso negado, tente novamente");
	}
	
	return 0;
}
