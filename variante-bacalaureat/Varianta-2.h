#include "functii-varianta-2.h"

// Subiectul 3

// Problema 3

void rezolvareSub3Problema3() {
	int x[100], n;
	citireProblema3(x, n);

	int y[100], m = 0;
	for (int i = 0; i < n; i++) {
		if (x[i] > 0) {
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
	int n;
	cout << "Introduceti n : ";
	cin >> n;
	cout << "a) " << sumaExponentiPrimi(n) << endl;
	cout << "b) ";
	if (extraPrim(n)) {
		cout << "DA";
	}
	else {
		cout << "NU";
	}
}