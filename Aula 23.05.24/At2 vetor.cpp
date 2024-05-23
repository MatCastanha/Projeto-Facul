#include <stdio.h>
#include <locale.h>
#include <math.h>

//Vetor (array)
int main(){
	setlocale(LC_ALL, "Portuguese");
	int i=0;
	float imc[5], altura[5], peso[5];
	
	for(i=0;i<5;i++){
		printf("Informe sua altura: ");
		scanf("%f", &altura[i]);
		printf("Informe seu peso: ");
		scanf("%f", &peso[i]);
	}
	
	for(i=0; i<5;i+=2){
		imc[i]= peso[i]/pow(altura[i],2);
		printf("%iº imc = %.1f\n",i+1, imc[i]);
	}
	

	return 0;
}
