#include <stdio.h>

int main(){
	int n;
	
	printf("Digite um valor: ");
	scanf("%i", &n);
	
	while(n>=1){
		printf("%i\n",n);
		n--;
	}
	return 0;
}
