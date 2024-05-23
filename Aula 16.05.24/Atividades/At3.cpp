/*
3) Faça um programa que solicite ao usuário que ele digite 5 números e mostre apenas os ímpares. 
Use a estrutura while. 
*/
#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int i=1, num;
	
	while(i<=5){
		printf("%iº-Número: ",i);
		scanf("%i", &num);
		
		if(num%2==1){
			printf(" %d é Impar\n", num);
		}
		i++;
	}
	
	return 0;
}
