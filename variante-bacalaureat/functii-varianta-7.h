#include <iostream>
#include <fstream>
#include <cstring>
#include <string>

using namespace std;

// Pentru Subiectul 3

// Pentru Problema 3

void citireProblema3(int x[100][100], int& n) {
	cout << "Introduceti n : ";
	cin >> n;

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < n; j++) {
			cout << "Introduceti x[" << i * 3 + j << "] : ";
			cin >> x[i][j];
		}
	}
}

void swapProblema3(int x[100][100], int n) {
	for (int i = 0; i < n; i++) {
		int r = x[0][i];
		x[0][i] = x[2][i];
		x[2][i] = r;
	}
}

void afisareProblema3(int x[100][100], int n) {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < n; j++) {
			cout << x[i][j] << " ";
		}
	}
}

// Pentru Problema 4

int p(int n) {
	if (n <= 5) {
		return n;
	}
	else {
		int c = 0;
		int r = n;
		while (n > 5) {
			n /= 2;
			c++;
		}
		int k = 5 * pow(2, c);
		if (k > r) {
			k /= 2;
		}
		return k;
	}
}

void suma(int s, int x[100], int& n) {
	n = 0;
	while (s > 0) {
		int k = p(s);
		x[n] = k;
		n++;

		s -= k;
	}
}

void afisareProblema4(int x[], int n) {
	for (int i = 0; i < n; i++) {
		cout << x[i] << " ";
	}
	cout << endl;
}