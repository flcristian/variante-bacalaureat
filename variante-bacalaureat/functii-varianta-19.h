#include <iostream>
#include <fstream>
#include <cstring>
#include <string>

using namespace std;

// Subiectul 3

void afisare(double x[], int n) {
	for (int i = 0; i < n; i++) {
		cout << x[i] << " ";
	}
	cout << endl;
}

void afisareMatrice(double x[100][100], int n, int m) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << x[i][j] << " ";
		}
		cout << endl;
	}
}

// Problema 3

void citireProblema3(double x[], int& n) {
	ifstream f("input.txt");
	n = 0;
	while (!f.eof()) {
		f >> x[n];
		n++;
	}
	f.close();
}

void aranjare(double x[], int n) {
	for (int i = 0, j = n - 1; i < j; i++) {
		while (x[j] >= 0) {
			j--;
		}
		if (x[i] >= 0 && i < j) {
			int r = x[i];
			x[i] = x[j];
			x[j] = r;
		}
	}
}

// Problema 4

void citireProblema4(double x[100][100], int& n, int& m) {
	ifstream f("input.txt");
	f >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			f >> x[i][j];
		}
	}
	f.close();
}

void inversare(double x[], int n) {
	int y[1000];
	for (int i = n - 1, j = 0; i > -1; i--, j++) {
		y[j] = x[i];
	}
	for (int i = 0; i < n; i++) {
		x[i] = y[i];
	}
}

void aranjareProblema4(double x[100][100], int n, int m) {
	for (int i = 0; i < n; i++) {
		aranjare(x[i], m);
		inversare(x[i], m);
	}
}