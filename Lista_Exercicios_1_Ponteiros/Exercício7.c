#include <stdio.h>

//função de inverter 
void inverterString(char *str){
	
    char *fim = str;
    char temp;

    while (*fim != '\0')
        fim++;

    fim--;

    while (str < fim){
        temp = *str;
        *str = *fim;
        *fim = temp;

        str++;
        fim--;
        
    }
}

int main(){
	
    char texto[100];

    printf("Digite uma string: ");
    fgets(texto, 100, stdin);

	//chamando função
    inverterString(texto);

    printf("\nInvertida: %s", texto);

    return 0;
    
}
