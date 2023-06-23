#include <iostream>
#include <fstream>
#include <cstring>
#include <string>

using namespace std;

// Subiectul 3

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

int count(double x[], int n) {
	double m = (x[0] + x[n - 1]) / 2;

	int c = 0;
	for (int i = 1; i < n - 1; i++) {
		if (x[i] >= m) {
			c++;
		}
	}
	return c;
}

// Problema 4

void citireProblema4(double x[], int& n) {
	ifstream f("input.txt");
	n = 0;
	while (!f.eof()) {
		f >> x[n];
		n++;
	}
	f.close();
}

void adaugare0inceput(double x[], int& n) {
	for (int i = n; i > 0; i--) {
		x[i] = x[i - 1];
	}
	x[0] = 0;
	n++;
}