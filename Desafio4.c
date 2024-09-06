#include <stdio.h>
#include <string.h>

void calculaRepresentacao(float faturamentos[], char* estados[], int tamanho) {
	float soma = 0;
    
	for (int i = 0; i < tamanho; i++) {
    	soma += faturamentos[i];
	}
    
	printf("Valor total: R$ %.2f \n", soma);
    
	if (soma != 0) {
    	for (int i = 0; i < tamanho; i++) {
        	float representacao = (faturamentos[i] / soma) * 100;
        	printf("Representacao percentual do estado %s: %.2f%%\n", estados[i], representacao);
    	}
	}
}

int main() {
    
	char* estados[] = {
    	"SP",
    	"RJ",
    	"MG",
    	"ES",
    	"Outros"
	};
    
	float faturamentos[] = {
    	67836.43,
    	36678.66,
    	29229.88,
    	27165.48,
    	19849.53   
	};

	int tamanho = sizeof(faturamentos) / sizeof(faturamentos[0]);

	calculaRepresentacao(faturamentos, estados, tamanho);

	return 0;
}

