#include <stdio.h>

int main (){
	int a,b;
	printf("Digite o primeiro número:");
	scanf("%i",&a);
	
	printf("Digite o segundo número:");
	scanf("%i",&b);
	
	if (a==b) {printf("os números são iguais");
	}
	if (a>b) {
		printf("o primeiro número número e maior que o segundo");
	} if (a<b) {
		printf("o segundo número e maior que o primeiro");
	}
	return 0;
}