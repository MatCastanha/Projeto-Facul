#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");

	// for -->(declarar e atribuir valor � variavel contadora  ; --> indicar a posi��o de parada;)
	//incremento --> somar +1
	// i++   i+=1    i=i+1
	//decremento --> subtrair -1 
	//i--   i-=1    i=i-1
	
	int i;
	float salario, somaSalario;
	
	for(i=1; i<=5; i++){
		printf("S�lario: ");
		scanf("%f", &salario);
		somaSalario+=salario;
		//somaSalario = somaSalario + salario	
	}
	printf("Soma dos sal�rios = %.2f", somaSalario);
	
}
