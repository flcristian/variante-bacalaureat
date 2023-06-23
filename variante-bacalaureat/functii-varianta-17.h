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

int interval(int x[], int n) {
	int a = x[0], b = x[n - 1];
	if (a > b) {
		int r = a;
		a = b;
		b = r;
	}

	int c = 0;
	for (int i = 0; i < n; i++) {
		if (x[i] >= a && x[i] <= b) {
			c++;
		}
	}

	return c;
}

// Problema 4

void citireProblema4(int x[], int& n) {
	ifstream f("input.txt");
	n = 0;
	while (!f.eof()) {
		f >> x[n];
		n++;
	}
	f.close();
}

void adaugare0inceput(int x[], int& n) {
	for (int i = n; i > 0; i--) {
		x[i] = x[i - 1];
	}
	x[0] = 0;
	n++;
}