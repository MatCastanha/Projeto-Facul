#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int anoAt, anoNc, idade;
	
	printf("Digite o ano atual: ");
	scanf("%i", &anoAt);
	printf("Digite seu ano de nacimento: ");
	scanf("%i", &anoNc);
	
	idade=anoAt-anoNc;
	printf("Voc� tem %i anos\n", idade);
	
	if(idade>=16){
		printf("Voc� pode votar este ano");
	}
	else{
		printf("Voc� ainda n�o pode votar este ano");
	}
	
	return 0;
}
