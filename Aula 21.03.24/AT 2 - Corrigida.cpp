#include <stdio.h>
#include <locale.h>

int main(){
	setlocale ( LC_ALL, "Portuguese" );
	
	//VARIAVEL
	float valor, des, conto;
	
	//COLETA DE INFORMA��O
	printf("Digite o valor da compra: ");
	scanf("%f", &valor);
	
	//COMPARA��O
	if(valor<=100){
	    des = valor * 0.05;
	}
	else{	
		des = valor * 0.10;
	}
	
	//RESULTADO
	conto = valor - des;
	printf("O Valor da sua compra � de R$%.2f com desconto de R$%.2f.", conto, des);
	
	return 0;
}
