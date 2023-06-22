#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void decimal_binario(int numD){
	int binario[32], i, j;
	if(numD == 0){
			printf("\n%d en binario es:\n", numD);
		}
		printf("\n%d en binario es:\n", numD);
		while(numD > 0){
			binario[i] = numD%2;
			numD = numD/2;
			i++;
		}
		for(j=i-1; j>=0; j--){
			printf("%d ", binario[j]);
		}
}

int binario_decimal(int numB){
	int decimal = 0, base = 0, r;
	while(numB != 0){
		r = numB%10;
		decimal = decimal+r*pow(2, base);
		numB = numB/10;
		base++;
	}
	return decimal;
}

int main(int argc, char *argv[]) {
	int num, opc;
	do{
			do{
			system("cls");
			printf("1.- Decimal a binario.\n");
			printf("2.- Binario a decimal.\n");
			printf("3.- Salir.\n");
			printf("\nElige una opcion: ");
			scanf("%d", &opc);
			}while(opc!=1 && opc!=2 && opc!=3);
		if(opc==1){
			system("cls");
			printf("Ingresa un numero entero: ");
			scanf("%d", &num);
			decimal_binario(num);
			printf("\n\n");
			system("pause");
		}
		if(opc==2){
			system("cls");
			printf("Ingresa un numero binario: ");
			scanf("%d", &num);
			printf("\n%d en decimal es: %d\n\n", num, binario_decimal(num));
			system("pause");
		}
	}while(opc!=3);
	printf("\nFin del programa.");
	return 0;
}

