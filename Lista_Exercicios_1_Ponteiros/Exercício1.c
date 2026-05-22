#include <stdio.h>

int main(){
	
	int num, *pont;
	
	pont = &num;
	
	printf("Digite o valor da variavel: %d\n", num);
	printf("Endereco da variavel: %p\n", &num);
	printf("Valor do pontero: %p\n", pont);
	printf("Valor apontado pelo ponteiro: %d\n ", *pont);
	
	return 0;
	
}
