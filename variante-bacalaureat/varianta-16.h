#include "functii-varianta-16.h"

// Subiectul 3

// Problema 3

void rezolvareSub3Problema3() {
	int x[1000], n;
	citireProblema3(x, n);
	int y[1000], c;
	numere(x, n, y, c);
	cout << c << " ";
	for (int i = 0; i < 4; i++) {
		cout << y[i] << " ";
	}
	cout << endl;
}

// Problema 4

void rezolvareSub3Problema4() {
	int x[1000], n;
	citireProblema4(x, n);
	for (int i = 0; i < n; i++) {
		if (cifrak(x[i], 0) == 3) {
			cout << x[i] << " ";
		}
	}
	cout << endl;
}