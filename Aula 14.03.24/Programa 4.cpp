#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float n1= 7.8;
	float n2= 4.9;
	float media;
	media = (n1+n2)/2;
	
	printf("Sua média aritimetica é: %.1f",media );
	
	return 0;	
}
