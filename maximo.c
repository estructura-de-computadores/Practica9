#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define Tam 5

void inicializa(int Matriz[Tam][Tam]){
	int num_rnd;
	for (int j=0;j<Tam;j++){
		for (int i=0;i<Tam;i++){
			num_rnd=15+(rand()%400);
			Matriz[i][j]=num_rnd;
		}
	}
}

int  maximo (int Matriz[Tam][Tam]){
	int maximo=0;
	for (int i = 0; i < Tam; i++){
		for (int j = 0; j < Tam; j++){
			if (maximo<Matriz[i][j]){
				maximo=Matriz[i][j];
			}
		}
	}
	return maximo;
}

void pinta(int Matriz[Tam][Tam]){
	for (int i=0;i<Tam;i++){
		for (int j=0;j<Tam;j++){
			printf("%i \t",Matriz[i][j]);
		}
		printf("\n\n");
	}
}

int main(int argc, char const *argv[])
{
	int A[Tam][Tam];
	int mayor;
	srand(time(NULL));
	printf("Programa que halla el valor maximo de una matriz\n");
	inicializa(A);
	printf("Matriz:\n");
	pinta(A);
	mayor=maximo(A);
	printf("El valor maximo es: %d\n",mayor);
	return 0;
}