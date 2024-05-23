#include <stdio.h>
#include <locale.h>

//Vetor (array)
int main(){
	setlocale(LC_ALL, "Portuguese");
	int i, numero[20];
	
	for(i=0; i<20; i++){
		printf("Digite um numero: ");
		scanf("%i", &numero[i]);
	}
	for(i=0; i<20; i++){
		printf("%iºnumero = %i\n", i, numero[i]);
	}
	
	
	return 0;
}
