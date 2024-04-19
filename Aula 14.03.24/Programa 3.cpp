#include <stdio.h>  
#include <locale.h> //header

int main(){
	setlocale(LC_ALL, "Portuguese");
	int n1,sucessor,antecessor;
	n1=100;
	sucessor=n1+1;
	antecessor=n1-1;
	
	printf("O antecessor de %i é %d e o sucessor de %i é %d",n1,antecessor,n1,sucessor);
		
	return 0;
}
