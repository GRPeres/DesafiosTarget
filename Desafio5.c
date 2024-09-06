#include <stdio.h>
#include <string.h>

void inverterString(char str[]) {
    
	int inicio = 0;
	int fim = strlen(str) - 1;
	char temp;

	while (inicio < fim) {
    	temp = str[inicio];
    	str[inicio] = str[fim];
    	str[fim] = temp;

    	inicio++;
    	fim--;
	}
}

int main() {
    
	char str[] = "Hello, World!";
    
	printf("Original: %s\n", str);

	inverterString(str);

	printf("Invertida: %s\n", str);

	return 0;
}

