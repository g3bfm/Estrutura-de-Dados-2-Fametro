#include <stdio.h>

void encontrarMaiorMenor(int *array, int tamanho, int *maior, int *menor){
	
	*maior = array[0];
	*menor = array[0];
	
	for (int i = 1; i < tamanho; i++){
		
		if(array[i] > *maior){
			*maior = array[i];
		}
		
		if(array[i] < *menor){
			*menor = array[i];
		}
	}
}

int main(){
	
	int tamanho;
	int maior, menor;
	
	printf("Digite a quantidade de elementos: ");
		scanf("%d", &tamanho);
		
		int array[100];
		
	for(int i = 0; i < tamanho; i++){
		printf("Digite o elemento %d: ", i+1);		
			scanf("%d", &array[i]);
	}
	
	encontrarMaiorMenor(array, tamanho, &maior, &menor);
	
	printf("\nMaior valor: %d\n", maior);
	printf("Menor valor: %d\n", menor);
	
	return 0;
	
}
