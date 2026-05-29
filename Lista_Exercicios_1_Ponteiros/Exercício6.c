#include <stdio.h>

// Função contagem de vogais/consoantes
void contarVogaisConsoantes(char *str, int *vogais, int *consoantes) {
    *vogais = 0;
    *consoantes = 0;

    while (*str != '\0') {

        //vericiação de vogais
        if (*str == 'a' || *str == 'A' ||
            *str == 'e' || *str == 'E' ||
            *str == 'i' || *str == 'I' ||
            *str == 'o' || *str == 'O' ||
            *str == 'u' || *str == 'U'){

            (*vogais)++;
        }

        //vericação de consoantes
        else if ((*str >= 'a' && *str <= 'z') ||
                 (*str >= 'A' && *str <= 'Z')){

            (*consoantes)++;
        }

        str++;
        
    }
}

int main(){
	
    char texto[100];
    int vogais, consoantes;

    printf("Digite uma string: ");
    fgets(texto, 100, stdin);

	//chamando função
    contarVogaisConsoantes(texto, &vogais, &consoantes);

    printf("Numero de vogais: %d\n", vogais);
    printf("Numero de consoantes: %d\n", consoantes);

    return 0;
    
}
