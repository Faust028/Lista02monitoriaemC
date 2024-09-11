#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");
    int num1, num2 = 0, num3 = 0, num4 = 0;

    printf("insira o primeiro número: ");
    scanf("%d", &num1);
    
    do {
        printf("insira o segundo número: ");
        scanf("%d", &num2);
        
        if (num2 <= num1) {
            printf("o segundo número deve ser maior que o primeiro número,\n digite novamente o segundo número: ");
        }
    } while (num2 <= num1);

    do {
        printf("insira o terceiro número: ");
        scanf("%d", &num3);
        
        if (num3 <= num2) {
            printf("o terceiro número deve ser maior que o primeiro e o segundo número,\n digite novamente o terceiro número: ");
        }
    } while (num3 <= num2);

    printf("insira o quarto numero: ");
    scanf("%d", &num4);
    
    if(num4>=num3){ 
    printf("ordem decrescente: %d, %d, %d ,%d ", num4, num3, num2, num1);
	}
	else if(num4<num3 && num4>=num2){
		printf("ordem decrescente: %d, %d, %d ,%d ", num3, num4, num2, num1 );
	}
	else if(num4<num2 && num4>=num1){
		printf("ordem decrescente: %d, %d, %d ,%d ", num3, num2, num4, num1 );
	}
	else {
		printf("ordem decrescente: %d, %d, %d ,%d ", num4, num1, num2, num3 );
	}
	
    return 0;
}