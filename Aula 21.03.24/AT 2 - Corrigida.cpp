#include <stdio.h>
#include <locale.h>

int main(){
	setlocale ( LC_ALL, "Portuguese" );
	
	//VARIAVEL
	float valor, des, conto;
	
	//COLETA DE INFORMAÇÃO
	printf("Digite o valor da compra: ");
	scanf("%f", &valor);
	
	//COMPARAÇÃO
	if(valor<=100){
	    des = valor * 0.05;
	}
	else{	
		des = valor * 0.10;
	}
	
	//RESULTADO
	conto = valor - des;
	printf("O Valor da sua compra é de R$%.2f com desconto de R$%.2f.", conto, des);
	
	return 0;
}
