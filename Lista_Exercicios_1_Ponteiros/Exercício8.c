#include <stdio.h>

//funções da calculadora
void calcular(float n1, float n2, float *soma, float *sub,
              float *mult, float *div){

    *soma = n1 + n2;
    *sub = n1 - n2;
    *mult = n1 * n2;
    *div = n1 / n2;
    
}

int main(){
	
    float a, b, soma, sub, mult, div;

    printf("Digite dois numeros: ");
    scanf("%f %f", &a, &b);
    
	//chamando as funções
    calcular(a, b, &soma, &sub, &mult, &div);

    printf("Soma: %.2f\n", soma);
    printf("Subtracao: %.2f\n", sub);
    printf("Multiplicacao: %.2f\n", mult);
    printf("Divisao: %.2f\n", div);

    return 0;
    
}
