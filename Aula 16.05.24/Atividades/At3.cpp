/*
3) Fa�a um programa que solicite ao usu�rio que ele digite 5 n�meros e mostre apenas os �mpares. 
Use a estrutura while. 
*/
#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int i=1, num;
	
	while(i<=5){
		printf("%i�-N�mero: ",i);
		scanf("%i", &num);
		
		if(num%2==1){
			printf(" %d � Impar\n", num);
		}
		i++;
	}
	
	return 0;
}
