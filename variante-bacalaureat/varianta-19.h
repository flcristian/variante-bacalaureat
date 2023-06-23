#include "functii-varianta-19.h"

// Subiectul 3

// Problema 3

void rezolvareSub3Problema3() {
	double x[1000];
	int n;
	citireProblema3(x, n);
	aranjare(x, n);
	afisare(x, n);
}

// Problema 4

void rezolvareSub3Problema4() {
	double x[100][100];
	int n, m;
	citireProblema4(x, n, m);
	aranjareProblema4(x, n, m);
	afisareMatrice(x, n, m);
}