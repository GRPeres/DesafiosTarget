#include <stdio.h>

int temFibonacci(int num){
    int fib = 1;
    int pfib = 0;
    while(fib < num){
        fib = fib + pfib;
        pfib = fib - pfib;
    }
    if(num == fib){
        printf("O numero informado pertence a Fibonacci");
    } else {
        printf("O numero informado nao pertence a Fibonacci");
    }
}

int main(){
    int i;
    printf("Informe o numero a ser testado:");
    scanf("%d",&i);
    temFibonacci(i);
}
