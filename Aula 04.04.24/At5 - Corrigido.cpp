#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float  x1, y1, x2, y2, raiz;
	
	printf("Digite um valor para x1: ");
	scanf("%f", &x1);
	printf("Digite um valor para y1: ");
	scanf("%f", &y1);
	printf("Digite um valor para x2: ");
	scanf("%f", &x2);
	printf("Digite um valor para y2: ");
	scanf("%f", &y2);
 
	raiz = sqrt(pow(x2-x1,2) + pow(y2-y1,2));
	printf("A distancia entre os pontos é de: %.4f", raiz);
	
	return 0;
}
