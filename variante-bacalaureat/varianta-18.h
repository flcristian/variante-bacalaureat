#include "functii-varianta-18.h"

// Subiectul 3

// Problema 3

void rezolvareSub3Problema3() {
	double x[1000];
	int n;
	citireProblema3(x, n);

	cout << count(x, n) << endl;
}

// Problema 4

void rezolvareSub3Problema4() {
	double x[1000];
	int n;
	citireProblema4(x, n);
	adaugare0inceput(x, n);

	cout << count(x, n) << endl;
}