#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese Brazil");
	
	float c, f;
	
	printf("Converter Celcius em Fahrenheit\n");
	printf("Informe a temperatura em Celcius: ");
	scanf("%f", &c);
	
	f = c * 1.8 + 32;
	
	printf("Resultado: %2.2f °F", f);
	
	system("pause");
	return 0;
	
}

