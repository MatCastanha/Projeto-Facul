#include <stdio.h>
#include <locale.h>
#include <math.h> // Biblioteca matematica

int main(){
	// 10�
	setlocale (LC_ALL, "Portuguese");
	float num, indice, resultado, valor;
	num = 64;
	indice = 2;
	 
	// eleva um numero a outro
	// pow � a fun��o
	resultado=pow(num,indice);
	printf("o numero %.2f elevado a %.2f = %.2f", num, indice, resultado);
	
	//raiz quadrada fun��o sqrt(num)
	// sq = squere (quadrado) rt= root ( raiz)
	resultado= sqrt(num);
	printf("\nA raiz de %.2f = %.2f",num, resultado);
	
	// arredondar para cima e para baixo
	// ceil --> Cima
	// floor --> Baixo
	valor= 9.752;
	printf("\nO valor %.3f arredondado para cima � %.2f", valor, ceil(valor));
	printf("\nO valor %.3f arredondado para baixo � %.2f", valor, floor(valor));



	return 0;
}
