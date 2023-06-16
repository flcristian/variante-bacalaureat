#include "functii-varianta-15.h"

// Subiectul 3

// Problema 3

void rezolvareSub3Problema3() {
	int x[1000], n;
	citireProblema3(x, n);
	int c = 0;

	for (int i = 0; i < n; i++) {
		contine(x[i], c);
	}

	cout << c;
}

// Problema 4

void rezolvareSub3Problema4() {
	int x[1000], n;
	citireProblema4(x, n);
	int k = lastImpare(x, n);
	if (k != -1) {
		cout << k << endl;
	}
	else {
		cout << "Nu exista" << endl;
	}
}