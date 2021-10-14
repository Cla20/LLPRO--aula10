#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main () {
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	float mp, n1, n2;
	
	printf("Calcular a média IFCE\n");
	
	printf("Informe a nota da n1: ");
	scanf("%f", &n1);
	
	printf("Informe a nota da n2: ");
	scanf("%f", &n2);
	
	mp = (n1*2 + n2*3)/5;
	
	printf("A média final é: %2.2f", mp);
	
	system("pause");
	return 0;
}
