#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");

	// for -->(declarar e atribuir valor à variavel contadora  ; --> indicar a posição de parada;)
	//incremento --> somar +1
	// i++   i+=1    i=i+1
	//decremento --> subtrair -1 
	//i--   i-=1    i=i-1
	
	int i;
	float salario, somaSalario;
	
	for(i=1; i<=5; i++){
		printf("Sálario: ");
		scanf("%f", &salario);
		somaSalario+=salario;
		//somaSalario = somaSalario + salario	
	}
	printf("Soma dos salários = %.2f", somaSalario);
	
}
