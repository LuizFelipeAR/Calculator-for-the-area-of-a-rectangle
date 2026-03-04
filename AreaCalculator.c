#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
		
	float b;
	float h;
	float a ;
	
	printf("Digite o comprimento da base em metros  ");
	scanf("%f",&b);
	printf("Digite o comprimento da altura em metros  ");
	scanf("%f", &h);
	a = b*h;
	
	printf("O valor da area do retangulo em metros: %.2f\n10",a);
	system("\npause");
	return 0;
}

