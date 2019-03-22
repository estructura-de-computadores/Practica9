#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define filas 8
#define columnas 5

void inicializa(int matrizF[filas][columnas]){
	int num_rnd;
	for (int i=0;i<filas;i++){
		for (int j=0;j<columnas;j++){
			num_rnd=(-10)+(rand()%10);
			matrizF[i][j]=num_rnd;
		}
	}
}

void minimoFilas(int matrizF[filas][columnas], int menorF[filas]){
	for (int i = 0; i < filas; i++){
		menorF[i]=matrizF[i][0];
		for (int j = 0; j < columnas; j++){
			if (matrizF[i][j]<menorF[i]){
				menorF[i]=matrizF[i][j];
			}
		}
	}
}



void pintaM(int matrizF[filas][columnas]){
	for (int i=0;i<filas;i++){
		for (int j=0;j<columnas;j++){
			printf("%i ",matrizF[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}

void pintaV(int menorF[filas]){
	for (int i = 0; i < filas; i++){
		printf("%d\n", menorF[i]);
	}
}

int main(int argc, char const *argv[])
{
	int matriz[filas][columnas];
	int menor[filas];
	srand(time(NULL));
	printf("Programa halla el numero minimo de las filas de una matriz\n\n");
	inicializa(matriz);
	pintaM(matriz);
	minimoFilas(matriz,menor);
	printf("Los menores de las filas de la matriz\n");
	pintaV(menor);
	return 0;
}