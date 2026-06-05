#include <stdio.h>

void trocar(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int num1, num2;

    printf("Digite dois valores: ");
    scanf("%d %d", &num1, &num2);

    trocar(&num1, &num2);

    printf("Valores trocados:\n");
    printf("num1 = %d\n", num1);
    printf("num2 = %d\n", num2);

    return 0;
	
}
