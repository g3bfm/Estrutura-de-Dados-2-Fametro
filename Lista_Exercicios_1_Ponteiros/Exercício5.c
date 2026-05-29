#include <stdio.h>

//função
void copiarString(char *origem, char *destino){
    while (*origem != '\0'){
        *destino = *origem;

        origem++;
        destino++;
    }
}

int main(){
    char textoOrigem[100];
    char textoDestino[100];

    printf("Digite uma string: ");
    fgets(textoOrigem, 100, stdin);

	//chamando função
    copiarString(textoOrigem, textoDestino);

    printf("String copiada: %s", textoDestino);

    return 0;
    
}
