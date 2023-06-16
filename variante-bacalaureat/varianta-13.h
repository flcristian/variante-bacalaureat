#include "functii-varianta-13.h"

// Subiectul 3

// Problema 3

void rezolvareSub3Problema3() {
	int x[1000], k;
	cout << "Introduceti k : ";
	cin >> k;

	formareVector(x, k);

	for (int i = 0; i < k; i++) {
		cout << x[i] << " ";
	}
}

// Problema 4

void rezolvareSub3Problema4() {
	int n, c;
	cout << "Introduceti n : ";
	cin >> n;
	cout << "Introduceti c : ";
	cin >> c;
	P(n, c);

	int x[100], d;
	citireProblema4(x, d);
	modificare(x, d);
	cout << "a) " << n << endl;
	cout << "b) ";
	for (int i = 0; i < d; i++) {
		cout << x[i] << " ";
	}
	cout << endl;

}