#include "functii-varianta-7.h"

// Subiectul 3

// Problema 3

void rezolvareSub3Problema3() {
	int x[100][100], n;
	citireProblema3(x, n);
	swapProblema3(x, n);
	afisareProblema3(x, n);
}

// Problema 4

void rezolvareSub3Problema4() {
	int n, s;
	cout << "Introduceti n : ";
	cin >> n;
	cout << "Introduceti s : ";
	cin >> s;

	cout << "a) " << p(n) << endl;
	int x[100], m;
	suma(s, x, m);
	cout << "b) ";
	afisareProblema4(x, m);
}