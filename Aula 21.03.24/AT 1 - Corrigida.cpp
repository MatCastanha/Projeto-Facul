#include <stdio.h>
#include <locale.h>

int main(){
	setlocale( LC_ALL, "Portuguese" );
	int numA, numB, soma, result;
	
	
	//PEGANDO INFORMAÇÕES
	
	printf("Digite um numero: ");
	scanf("%i", &numA);
   
    printf("Digite outro numero: ");
    scanf("%i", &numB);
    
    soma = (numA + numB);

	printf("A soma dos numeros deu %i", soma);
	
	// COMPARAÇÃO
	
	if(soma>=10){
		result = soma * 2;
		printf("O dobro de %.i será: %i ", soma, result);
		
	}
	
	else{
		result = soma * 3;	  
		printf("\nO triplo de %i será: %i", soma, result);
	}
	
	return 0;
}
