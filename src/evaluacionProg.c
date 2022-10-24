/*
 ============================================================================
 Name        : evaluacionProg.c
 Author      :
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define TAM 3
float aplicarImpuesto(float numero);
typedef struct {
	int id;
	char nombre[20];
	char tipo;
	float efectividad;
} eVacuna;
int ordenarVacunasPorTipo(eVacuna vacunas[], int tam);

int main(void) {
	setbuf(stdout, NULL);

	eVacuna vacunas[TAM];

	float impuestoAplicado;
	impuestoAplicado = aplicarImpuesto(5);
	printf("%.2f", impuestoAplicado);

	ordenarVacunasPorTipo(vacunas, TAM);

	return EXIT_SUCCESS;
}

float aplicarImpuesto(float numero) {

	float resultado = numero + numero * 0.5;

	return resultado;

}
int ordenarVacunasPorTipo(eVacuna vacunas[], int tam) {

	eVacuna auxVacuna;
	int todoOk = 0;
	if (vacunas != NULL && tam > 0) {
		for (int i = 0; i < tam - 1; i++) {
			for (int j = i + 1; j < tam; j++) {
				if ((vacunas[i].tipo < vacunas[j].tipo
						|| vacunas[i].efectividad < vacunas[j].efectividad)) {
					auxVacuna = vacunas[i];
					vacunas[i] = vacunas[j];
					vacunas[j] = auxVacuna;
				}

			}

		}

	}
	return todoOk;
}

