#include <stdio.h>

int main(){
	int v = 0, digito, soma = 0;
	
	while(v<10){
		printf("digite um valor: ");
		scanf("%i", &digito);
		v++;
		
		if(digito<40){
			soma+=digito;
		}
	}
	
	printf("Soma dos valores: %i", soma);
	
	return 0;
}
