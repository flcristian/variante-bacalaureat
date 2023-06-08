#include "functii-varianta-5.h"

// Subiectul 3

// Problema 1

void rezolvareSub3Problema1() {
	int s[100];
	back(s, 0);
}

// Problema 3

void rezolvareSub3Problema3() {
	int n;
	cout << "Introduceti n : ";
	cin >> n;

	ofstream f("output.txt");
	while (n > 0) {
		f << n << " ";
		n /= 10;
	}
	f.close();
}

// Problema 4

void rezolvareSub3Problema4() {
	int x[100], n, a;
	citireProblema4(x, n);
	cout << "Introduceti a : ";
	cin >> a;
	cout << "a) " << f(a) << endl;
	cout << "b) ";
	int c = 0;
	for (int i = 0; i < n; i++) {
		if (x[i] == f(x[i])) {
			cout << x[i] << " ";
			c++;
		}
	}
	if (c == 0) {
		cout << "NU EXISTA";
	}
}