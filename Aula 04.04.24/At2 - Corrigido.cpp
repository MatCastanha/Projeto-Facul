#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float conta, n1, n2, n3;
	
	printf("Digite um valor para N1: ");
	scanf("%f", &n1);
	printf("Digite um valor para N2: ");
	scanf("%f", &n2);
	printf("Digite um valor para N3: ");
	scanf("%f", &n3);
	
	conta = n1*0.2 + n2*0.3 + n3*0.5;
	printf("A média ponderada é de %.1f", conta);
	
	return 0;	
}
