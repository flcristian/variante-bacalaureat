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

void numere(int x[], int n, int y[], int& c) {
	c = 0;
	for (int i = 0; i < n; i++) {
		if (x[i] % 13 == 0) {
			y[c] = i + 1;
			c++;
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

int cifrak(int x, int k) {
	int c = 0;
	while (x > 0) {
		if (x % 10 == k) {
			c++;
		}
		x /= 10;
	}
	return c;
}