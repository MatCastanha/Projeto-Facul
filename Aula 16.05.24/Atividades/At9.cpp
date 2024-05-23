/*
9) Faça um programa que verifique a validade de uma senha fornecida pelo usuário.
 A senha é 4531. O programa deve mostrar uma mensagem de permissão de acesso ou não.
*/
#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int senha;
	
	printf("Digite a senha de 4 digitos:\n");
	scanf("%i", &senha);
	
	if(senha==4531){
		printf("==================================\n");
		printf("Senha correta, Permição Altorizada\n");
		printf("==================================");
	}
	else{
		printf("================================\n");
		printf("Senha incorreta, Permição Negada\n");
		printf("================================");
	}
	
	return 0;
}
