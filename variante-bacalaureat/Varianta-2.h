#include <iostream>
#include <fstream>
#include <cstring>
#include <string>

using namespace std;

// Subiectul 3

// Problema 3

void citireProblema3(int x[], int& n) {
	ifstream f("input.txt");
	n = 0;
	while (!f.eof()) {
		f >> x[n];
		n++;
	}
	f.close();
}

void bubbleSortSentinel(int x[], int n) {
	int i = 0;
	bool flag = true;
	while (flag && i < n) {
		flag = false;
		for (int j = n - 1; j > i; j--) {
			if (x[j] < x[j - 1]) {
				int r = x[j];
				x[j] = x[j - 1];
				x[j - 1] = r;
				flag = true;
			}
		}
		i++;
	}
}

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

int countDiv(int x) {
	int c = 0;
	for (int i = 1; i * i <= x; i++) {
		if (x % i == 0) {
			c++;
			if (i * i != x) {
				c++;
			}
		}
	}
	return c;
}

bool estePrim(int x) {
	if (countDiv(x) == 2) {
		return 1;
	}
	return 0;
}

int countCifre(int x) {
	int c = 0;
	while (x > 0) {
		x /= 10;
		c++;
	}
	return c;
}
 
int permutare(int x) {
	int r = x % 10;
	x /= 10;
	x = r * pow(10, countCifre(x)) + x;
	return x;
}

bool extraPrim(int x) {
	if (!estePrim(x)) {
		return 0;
	}
	for (int i = 1; i < countCifre(x); i++) {
		x = permutare(x);
		if (!estePrim(x)) {
			return 0;
		}
	}
	return 1;
}

int sumaExponentiPrimi(int x) {
	int i = 2, suma = 0;
	while (i <= x) {
		if (x % i == 0 && estePrim(i)) {
			x /= i;
			suma += i;
		}
		else {
			i++;
		}
	}
	return suma;
}

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