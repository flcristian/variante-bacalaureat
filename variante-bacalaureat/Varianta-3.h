#include "functii-varianta-3.h"

// Subiectul 3

// Problema 3

void rezolvareSub3Problema3() {
	int x[100], n;
	citireProblema3(x, n);

	int y[100], m = 0;
	for (int i = 0; i < n; i++) {
		if (x[i] / 100 > 0) {
			y[m] = x[i];
			m++;
		}
	}
	if (m == 0) {
		cout << "NU EXISTA";
	}
	else {
		bubbleSortSentinel(y, m);
		for (int i = 0; i < m; i++) {
			cout << y[i] << " ";
		}
	}
}

// Problema 4

void rezolvareSub3Problema4() {
	int a, b;
	cout << "Introduceti a : ";
	cin >> a;
	cout << "Introduceti b : ";
	cin >> b;

	cout << "a) " << cif(a, b) << endl;
	cout << "b) " << formareNumar(a) << endl;
}