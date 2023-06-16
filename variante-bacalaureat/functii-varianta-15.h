#include <iostream>
#include <fstream>
#include <cstring>
#include <string>

using namespace std;

// Subiectul 3

// Problema 3

void contine(int x, int& c) {
	while (x > 0) {
		if (x % 10 == 5) {
			c++;
		}
		x /= 10;
	}
}

void citireProblema3(int x[], int& n) {
	ifstream f("input.txt");
	n = 0;
	while (!f.eof()) {
		f >> x[n];
		if (x[n] == 0) {
			break;
		}
		n++;
	}
	f.close();
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

bool cifreImpare(int x) {
	while (x > 0) {
		if ((x % 10) % 2 == 0) {
			return 0;
		}
		x /= 10;
	}
	return 1;
}

int lastImpare(int x[], int n) {
	for (int i = n - 1; i > -1; i--) {
		if (x[i] != 0 && cifreImpare(x[i])) {
			return x[i];
		}
	}
	return -1;
}
