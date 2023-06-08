#include "functii-varianta-8.h"

// Subiectul 3

// Problema 2

void rezolvareSub3Problema2() {
	int s[100];
	back(s, 0);
}

// Problema 3

void rezolvareSub3Problema3() {
	int n;
	cout << "Introduceti n : ";
	cin >> n;

	int x[100];
	primeleNPare(x, n);
	tiparProblema3(x, n);
}

// Problema 4

void rezolvareSub3Problema4() {
	int n;
	cout << "Introduceti n : ";
	cin >> n;

	cout << "a) " << p1(n) << " si " << p2(n) << endl;
	cout << "b) " << nrCifreEgaleCu0(n) << endl;
}