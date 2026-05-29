#include <stdio.h>

//função
void dobrar(int *num){
    *num = (*num) * 2;
}

int main(){
	
    int valor;

    printf("Digite um numero inteiro: ");
    scanf("%d", &valor);

    printf("Valor antes: %d\n", valor);
    
	//chamando função
    dobrar(&valor);

    printf("Valor depois do dobro: %d\n", valor);

    return 0;
    
}
