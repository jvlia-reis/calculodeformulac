#include <iostream>
#include <stdio.h>

/*  Coloque o código deste programa no campo Entrega 4. Escreva um programa que leia dois dados
inteiros de entrada, calcule e exiba o resultado conforme a fórmula abaixo:
R =
3A + 2B
________
A + B */

int main() {
	
	float valor_a, valor_b, res1, res2, res3;
	
	printf("Insira o valor A: " );
	scanf("%f",&valor_a);
	
	printf("Insira o valor B: ");
	scanf("%f",&valor_b);
	
	res1 = (3 * valor_a) + (2 * valor_b);
	
	res2 = valor_a + valor_b;
	
	res3 = res1 / res2; 
	
	printf("O resultado do calculo da formula e %.1f", res3);
	return 0;
}
