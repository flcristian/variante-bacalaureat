#include "functii-varianta-17.h"

// Subiectul 3

// Problema 3

void rezolvareSub3Problema3() {
	int x[1000], n;
	citireProblema3(x, n);

	cout << interval(x, n) << endl;
}

// Problema 4

void rezolvareSub3Problema4() {
	int x[1000], n;
	citireProblema4(x, n);
	adaugare0inceput(x, n);
	cout << interval(x, n) - 1;
}