/*
9) Fa�a um programa que verifique a validade de uma senha fornecida pelo usu�rio.
 A senha � 4531. O programa deve mostrar uma mensagem de permiss�o de acesso ou n�o.
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
		printf("Senha correta, Permi��o Altorizada\n");
		printf("==================================");
	}
	else{
		printf("================================\n");
		printf("Senha incorreta, Permi��o Negada\n");
		printf("================================");
	}
	
	return 0;
}
