#include "functii-varianta-1.h"

// Subiectul 3

// Problema 1

void rezolvareSub3Problema1() {
	int s[100];
	back(s, 0);
}

// Problema 3

void rezolvareSub3Problema3() {
	int x[100], d, n;
	citireProblema3(x, d);
	cout << "Introduceti n : ";
	cin >> n;

	for (int i = 0; i < d; i++) {
		if (x[i] % n == 0) {
			cout << x[i] << " ";
		}
	}
}

// Problema 4

void rezolvareSub3Problema4() {
	int x[100], n, a;
	citireProblema4(x, n);
	cout << "Introduceti a : ";
	cin >> a;
	cout << "a) " << sub(x, n, a) << endl;
	cout << "b) ";
	if (diferiteDouaCateDoua(x, n)) {
		cout << "DA";
	}
	else {
		cout << "NU";
	}
	cout << endl;
}

// ? ? ?