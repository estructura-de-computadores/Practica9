#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define Tam 3

void inicializa(int Matriz[Tam][Tam]){
	int num_rnd;
	for (int j=0;j<Tam;j++){
		for (int i=0;i<Tam;i++){
			num_rnd=1+(rand()%10);
			Matriz[i][j]=num_rnd;
		}
	}
}

void  multiplica (int A[Tam][Tam], int B [Tam][Tam], int C[Tam][Tam]){
	for (int i = 0; i < Tam; i++){
		for (int j = 0; j < Tam; j++){
			C[i][j]=0;
			for (int k = 0; k < Tam; k++){
				C[i][j]= C[i][j]+A[i][k]*B[k][j];
			}
		}
	}
}

void pinta(int Matriz[Tam][Tam]){
	for (int i=0;i<Tam;i++){
		for (int j=0;j<Tam;j++){
			printf("%i ",Matriz[i][j]);
		}
		printf("\n");
	}
}

int main(int argc, char const *argv[])
{
	int A[Tam][Tam];
	int B[Tam][Tam];
	int C[Tam][Tam];
	srand(time(NULL));
	printf("Programa que calcula la multiplicacion de dos matrices\n");
	inicializa(A);
	printf("Matriz 1:\n");
	pinta(A);
	inicializa(B);
	printf("Matriz 2:\n");
	pinta(B);
	multiplica(A,B,C);
	printf("La multiplicacion de las dos es: \n");
	pinta(C);
	return 0;
}