#include <iostream>
#include <fstream>
#include <cstring>
#include <string>

using namespace std;

// Subiectul 3

// Problema 3

void formareVector(int x[], int k) {
	int j = 1, r = 2;
	for (int i = 0; i < k; i++) {
		x[i] = j;
		j--;
		if (j == 0) {
			j = r;
			r++;
		}
	}
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

void P(int& n, int c) {
	int k = 1, r = 0;
	while (n > 0) {
		int cifra = n % 10;
		if (cifra != c) {
			r = cifra * pow(10, k - 1) + r;
			k++;
		}
		n /= 10;
	}
	n = r;
}

void removePos(int x[], int& d, int k) {
	for (int i = k; i < d - 1; i++) {
		x[i] = x[i + 1];
	}
	d--;
}

void modificare(int x[], int& d) {
	int y[5] = { 1,3,5,7,9 };
	for (int i = 0; i < d; i++) {
		for (int j = 0; j < 5; j++) {
			P(x[i], y[j]);
		}
		if (x[i] == 0) {
			removePos(x, d, i);
			i--;
		}		
	}
}