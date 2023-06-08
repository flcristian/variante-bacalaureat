#include "functii-varianta-11.h"

// Subiectul 3

// Problema 3

void rezolvareSub3Problema3() {
	int x[100], n;
	citireProblema3(x, n);
	modificareProblema3(x, n);
	afisareProblema3(x, n);
}

// Problema 4

void rezolvareSub3Problema4() {
	int x[100], n;
	citireProblema4(x, n);
	cout << countPrime(x, n) << endl;
}