#include <stdio.h>
#include <locale.h>

int main(){
	setlocale( LC_ALL, "Portuguese" );
	int numA, numB, soma, result;
	
	
	//PEGANDO INFORMA��ES
	
	printf("Digite um numero: ");
	scanf("%i", &numA);
   
    printf("Digite outro numero: ");
    scanf("%i", &numB);
    
    soma = (numA + numB);

	printf("A soma dos numeros deu %i", soma);
	
	// COMPARA��O
	
	if(soma>=10){
		result = soma * 2;
		printf("O dobro de %.i ser�: %i ", soma, result);
		
	}
	
	else{
		result = soma * 3;	  
		printf("\nO triplo de %i ser�: %i", soma, result);
	}
	
	return 0;
}
