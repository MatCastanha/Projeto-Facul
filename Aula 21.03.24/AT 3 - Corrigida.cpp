#include <stdio.h>
#include <locale.h>
#include <ctype.h>

int main(){
	setlocale ( LC_ALL, "Portuguese");
	
	//VARIAVEL
	char gen;
	float alt, peso;
	
	printf("MEDIDOR DE PESO IDEAL\n");
	
	//PEGANDO INFORMAÇÃO DO DO USUARIO
	printf("Diga-me qual o seu genero (Ultilizando F ou M): ");
	scanf(" %c", &gen);
	printf("Diga-me qual a sua altura: ");
	scanf("%f", &alt);
	
	gen = toupper(gen);     
	//toupper -> maiusculo
	//tolower -> minusculo   
	             
	//COMPARAÇÃO
	// SE A VARIAVEL FOR DA CLASSE (CHAR) ULTILIZAR ASPAS SIMPLES ' X '
	if(gen=='F'){   
		peso = 62.1 * alt - 44.7;
		printf("O peso ideal para feminino é: %.2f", peso);
	}
	else{
		peso = 72.7 * alt - 58;
		printf("O peso ideal para masculino é: %.2f", peso);		
	}
	
	return 0;
}
